#include "../dk_device.h"
#include "../dk_queue.h"
#include "../dk_image.h"
#include "../cmdbuf_writer.h"

#include "engine_3d.h"
#include "engine_2d.h"
#include "engine_copy.h"
#include "engine_inline.h"

using namespace maxwell;
using namespace dk::detail;

using E3D  = Engine3D;
using E2D  = Engine2D;
using Copy = EngineCopy;
using Inl  = EngineInline;

void Queue::setupTransfer()
{
	CmdBufWriter w{&m_cmdBuf};

	w << Cmd(2D, SetBeta1{}, E2D::SetBeta1::Value{0xFF}); // alpha blend factor
	w << CmdInline(2D, SetClipEnable{}, 0);
	w << CmdInline(2D, SetPixelsFromMemoryCorralSize{}, 0x3f);
}

void dk::detail::BlitCopyEngine(DkCmdBuf obj, ImageInfo const& src, ImageInfo const& dst, BlitParams const& params, uint32_t srcZ, uint32_t dstZ)
{
	CmdBufWriter w{obj};
	w.reserve(2*7 + 4 + 10);

	DkGpuAddr srcIova = src.m_iova;
	DkGpuAddr dstIova = dst.m_iova;
	uint32_t copyFlags = Copy::LaunchDma::TransferType::NonPipelined | Copy::LaunchDma::FlushEnable{} | Copy::LaunchDma::MultiLineEnable{};
	bool useSwizzle = false;

	if (src.m_isLayered)
		srcIova += srcZ * src.m_layerStride;
	if (src.m_isLinear)
		srcIova += params.srcY * src.m_horizontal + params.srcX * src.m_bytesPerBlock;
	else if (src.m_widthMs * src.m_bytesPerBlock > 0x10000)
		useSwizzle = true;

	if (dst.m_isLayered)
		dstIova += dstZ * dst.m_layerStride;
	if (dst.m_isLinear)
		dstIova += params.dstY * dst.m_horizontal + params.dstX * dst.m_bytesPerBlock;
	else if (dst.m_widthMs * dst.m_bytesPerBlock > 0x10000)
		useSwizzle = true;

	uint32_t srcHorizFactor = 1;
	uint32_t dstHorizFactor = 1;
	uint32_t srcX = params.srcX;
	uint32_t dstX = params.dstX;
	uint32_t width = params.width;

	if (!useSwizzle)
	{
		srcX *= src.m_bytesPerBlock;
		dstX *= dst.m_bytesPerBlock;
		width *= src.m_bytesPerBlock;
		srcHorizFactor = src.m_bytesPerBlock;
		dstHorizFactor = dst.m_bytesPerBlock;
	}

	if (!src.m_isLinear)
	{
		w << Cmd(Copy, SetSrcBlockSize{},
			src.m_tileMode | Copy::SetSrcBlockSize::GobHeight::Fermi8,
			src.m_horizontal*srcHorizFactor,
			src.m_vertical,
			src.m_depth,
			src.m_isLayered ? 0 : srcZ,
			Copy::SetSrcOrigin::X{srcX} | Copy::SetSrcOrigin::Y{params.srcY});
	}
	else
	{
		copyFlags |= Copy::LaunchDma::SrcMemoryLayout::Pitch;
		w << Cmd(Copy, PitchIn{}, src.m_horizontal);
	}

	if (!dst.m_isLinear)
	{
		w << Cmd(Copy, SetDstBlockSize{},
			dst.m_tileMode | Copy::SetDstBlockSize::GobHeight::Fermi8,
			dst.m_horizontal*dstHorizFactor,
			dst.m_vertical,
			dst.m_depth,
			dst.m_isLayered ? 0 : dstZ,
			Copy::SetDstOrigin::X{dstX} | Copy::SetDstOrigin::Y{params.dstY});
	}
	else
	{
		copyFlags |= Copy::LaunchDma::DstMemoryLayout::Pitch;
		w << Cmd(Copy, PitchOut{}, dst.m_horizontal);
	}

	if (useSwizzle)
	{
		copyFlags |= Copy::LaunchDma::RemapEnable{};
		uint32_t compSize = 2;
		if (src.m_bytesPerBlock == 4 || src.m_bytesPerBlock == 8 || src.m_bytesPerBlock == 16)
			compSize = 4;

		using S = Copy::SetRemapComponents;
		w << Cmd(Copy, SetRemapConst{}, 0, 0,
			S::DstX{0} | S::DstY{1} | S::DstZ{2} | S::DstW{3} |
			S::ComponentSize{compSize-1} |
			S::NumSrcComponents{src.m_bytesPerBlock/compSize-1} |
			S::NumDstComponents{dst.m_bytesPerBlock/compSize-1});
	}

	w << Cmd(Copy, OffsetIn{}, Iova(srcIova), Iova(dstIova));
	w << Cmd(Copy, LineLengthIn{}, width, params.height);
	w << Cmd(Copy, LaunchDma{}, copyFlags);
}

void dk::detail::Blit2DEngine(DkCmdBuf obj, ImageInfo const& src, ImageInfo const& dst, BlitParams const& params, int32_t dudx, int32_t dvdy, uint32_t flags, uint32_t factor)
{
	CmdBufWriter w{obj};
	w.reserve((3 + 10*2 + 1) + 14);

	if (flags & Blit2D_SetupEngine)
	{
		using ML = E2D::SetDstMemoryLayout;
		using BO = E2D::SetOperation;
		uint32_t blitOp;
		bool hasFactor = false;
		switch (flags & DkBlitFlag_Mode_Mask)
		{
			default:
			case DkBlitFlag_ModeBlit:
				blitOp = BO::SrcCopy;
				break;
			case DkBlitFlag_ModeAlphaMask:
				blitOp = BO::SrcCopyAnd;
				break;
			case DkBlitFlag_ModeAlphaBlend:
				blitOp = BO::Blend;
				break;
			case DkBlitFlag_ModePremultBlit:
				blitOp = BO::SrcCopyPremult;
				hasFactor = true;
				break;
			case DkBlitFlag_ModePremultBlend:
				blitOp = BO::BlendPremult;
				hasFactor = true;
				break;
		}

		w << CmdInline(2D, SetOperation{}, blitOp);
		if (hasFactor)
			w << Cmd(2D, SetBeta4{}, factor); // premult blend factor

		if (!src.m_isLinear)
		{
			w << Cmd(2D, SetSrcFormat{}, src.m_format, ML::BlockLinear, src.m_tileMode, src.m_arrayMode);
			w << Cmd(2D, SetSrcWidth{}, src.m_horizontal, src.m_vertical, Iova(src.m_iova));
		}
		else
		{
			w << Cmd(2D, SetSrcFormat{}, src.m_format, ML::Pitch);
			w << Cmd(2D, SetSrcPitch{}, src.m_horizontal, src.m_width, src.m_height, Iova(src.m_iova));
		}

		if (!dst.m_isLinear)
		{
			w << Cmd(2D, SetDstFormat{}, dst.m_format, ML::BlockLinear, dst.m_tileMode, dst.m_arrayMode, 0);
			w << Cmd(2D, SetDstWidth{}, dst.m_horizontal, dst.m_vertical, Iova(dst.m_iova));
		}
		else
		{
			w << Cmd(2D, SetDstFormat{}, dst.m_format, ML::Pitch);
			w << Cmd(2D, SetDstPitch{}, dst.m_horizontal, dst.m_width, dst.m_height, Iova(dst.m_iova));
		}

		w << CmdInline(2D, SetCompressionEnable{}, 1);
	}
	else
	{
		w << Cmd(2D, SetSrcOffset{}, Iova(src.m_iova));
		w << Cmd(2D, SetDstOffset{}, Iova(dst.m_iova));
	}

	uint32_t sampleMode = 0;
	using SM = E2D::SetPixelsFromMemorySampleMode;
	if (flags & Blit2D_OriginCorner)
		sampleMode |= SM::Origin::Corner;
	if (flags & Blit2D_UseFilter)
		sampleMode |= SM::Filter::Bilinear;

	w << CmdInline(2D, SetPixelsFromMemorySampleMode{}, sampleMode);
	w << Cmd(2D, SetPixelsFromMemoryDstX0{},
		params.dstX,
		params.dstY,
		params.width,
		params.height,
		dudx << (32 - DiffFractBits),
		dudx >> DiffFractBits,
		dvdy << (32 - DiffFractBits),
		dvdy >> DiffFractBits,
		params.srcX << (32 - SrcFractBits),
		params.srcX >> SrcFractBits,
		params.srcY << (32 - SrcFractBits),
		params.srcY >> SrcFractBits
	);
}

void dkCmdBufPushData(DkCmdBuf obj, DkGpuAddr addr, const void* data, uint32_t size)
{
	DK_ENTRYPOINT(obj);
	DK_DEBUG_BAD_INPUT(addr == DK_GPU_ADDR_INVALID);
	DK_DEBUG_NON_NULL(data);
	DK_DEBUG_BAD_INPUT(size > 0x7FFC);
	DK_DEBUG_SIZE_ALIGN(size, 4);
	if (!size)
		return;

	CmdBufWriter w{obj};
	w.reserve(7 + size/4);

	w << MakeIncreasingCmd(Subchannel3D, Inl::LineLengthIn{},
		size,      // LineLengthIn
		1,         // LineCount
		Iova(addr) // OffsetOut
	);
	w << MakeInlineCmd(Subchannel3D, Inl::LaunchDma{},
		Inl::LaunchDma::DstMemoryLayout::Pitch | Inl::LaunchDma::CompletionType::FlushOnly
	);
	w << CmdList<1>{ MakeCmdHeader(NonIncreasing, size/4, Subchannel3D, Inl::LoadInlineData{}) };
	w.addRawData(data, size);
}

void dkCmdBufCopyBuffer(DkCmdBuf obj, DkGpuAddr srcAddr, DkGpuAddr dstAddr, uint32_t size)
{
	DK_ENTRYPOINT(obj);
	DK_DEBUG_BAD_INPUT(srcAddr == DK_GPU_ADDR_INVALID);
	DK_DEBUG_BAD_INPUT(dstAddr == DK_GPU_ADDR_INVALID);
	if (!size)
		return;

	CmdBufWriter w{obj};

	w.reserve(2); // one more for extra flush
	w << CmdInline(3D, NoOperation{}, 0);

	while (size)
	{
		uint32_t curSize = size > 0x3FFFFF ? 0x3FFFFF : size;

		using E = Copy::LaunchDma;
		w.reserve(9); // one more for extra flush
		w << Cmd(Copy, OffsetIn{}, Iova(srcAddr), Iova(dstAddr));
		w << Cmd(Copy, LineLengthIn{}, curSize);
		w << CmdInline(Copy, LaunchDma{},
			E::TransferType::NonPipelined | E::FlushEnable{} | E::SrcMemoryLayout::Pitch | E::DstMemoryLayout::Pitch
		);

		size -= curSize;
		srcAddr += curSize;
		dstAddr += curSize;
	}

	w << CmdInline(3D, NoOperation{}, 0);
}
