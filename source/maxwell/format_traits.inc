	{ 0x0F04,  8, 0, 0, 0, 0, 0,  1, 1, _C(8), 0x00, _CS(R8Unorm), _CS(R8Unorm), _(R8, Unorm,Unorm,Unorm,Unorm, R,Zero,Zero,OneFloat) },
	{ 0x0F00,  8, 0, 0, 0, 0, 0,  1, 1, _C(8), 0x00, _CS(R8Snorm), _CS(R8Snorm), _(R8, Snorm,Snorm,Snorm,Snorm, R,Zero,Zero,OneFloat) },
	{ 0x0701,  8, 0, 0, 0, 0, 0,  1, 1, _C(8), 0x00, _CS(R8Uint), _CS(R8Unorm), _(R8, Uint,Uint,Uint,Uint, R,Zero,Zero,OneInt) },
	{ 0x0701,  8, 0, 0, 0, 0, 0,  1, 1, _C(8), 0x00, _CS(R8Sint), _CS(R8Unorm), _(R8, Sint,Sint,Sint,Sint, R,Zero,Zero,OneInt) },
	{ 0x0F00, 16, 0, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(R16Float), _CS(R16Float), _(R16, Float,Float,Float,Float, R,Zero,Zero,OneFloat) },
	{ 0x0F04, 16, 0, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(R16Unorm), _CS(R16Unorm), _(R16, Unorm,Unorm,Unorm,Unorm, R,Zero,Zero,OneFloat) },
	{ 0x0F00, 16, 0, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(R16Snorm), _CS(R16Snorm), _(R16, Snorm,Snorm,Snorm,Snorm, R,Zero,Zero,OneFloat) },
	{ 0x0701, 16, 0, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(R16Uint), _CS(R16Float), _(R16, Uint,Uint,Uint,Uint, R,Zero,Zero,OneInt) },
	{ 0x0701, 16, 0, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(R16Sint), _CS(R16Float), _(R16, Sint,Sint,Sint,Sint, R,Zero,Zero,OneInt) },
	{ 0x0F00, 32, 0, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(R32Float), _CS(R32Float), _(R32, Float,Float,Float,Float, R,Zero,Zero,OneFloat) },
	{ 0x0701, 32, 0, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(R32Uint), _CS(R32Float), _(R32, Uint,Uint,Uint,Uint, R,Zero,Zero,OneInt) },
	{ 0x0701, 32, 0, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(R32Sint), _CS(R32Float), _(R32, Sint,Sint,Sint,Sint, R,Zero,Zero,OneInt) },
	{ 0x0F04,  8, 8, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(RG8Unorm), _CS(RG8Unorm), _(G8R8, Unorm,Unorm,Unorm,Unorm, R,G,Zero,OneFloat) },
	{ 0x0F00,  8, 8, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(RG8Snorm), _CS(RG8Snorm), _(G8R8, Snorm,Snorm,Snorm,Snorm, R,G,Zero,OneFloat) },
	{ 0x0701,  8, 8, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(RG8Uint), _CS(RG8Unorm), _(G8R8, Uint,Uint,Uint,Uint, R,G,Zero,OneInt) },
	{ 0x0701,  8, 8, 0, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(RG8Sint), _CS(RG8Unorm), _(G8R8, Sint,Sint,Sint,Sint, R,G,Zero,OneInt) },
	{ 0x0F00, 16,16, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RG16Float), _CS(RG16Float), _(R16_G16, Float,Float,Float,Float, R,G,Zero,OneFloat) },
	{ 0x0F04, 16,16, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RG16Unorm), _CS(RG16Unorm), _(R16_G16, Unorm,Unorm,Unorm,Unorm, R,G,Zero,OneFloat) },
	{ 0x0F00, 16,16, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RG16Snorm), _CS(RG16Snorm), _(R16_G16, Snorm,Snorm,Snorm,Snorm, R,G,Zero,OneFloat) },
	{ 0x0701, 16,16, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RG16Uint), _CS(BGRA8Unorm), _(R16_G16, Uint,Uint,Uint,Uint, R,G,Zero,OneInt) },
	{ 0x0701, 16,16, 0, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RG16Sint), _CS(BGRA8Unorm), _(R16_G16, Sint,Sint,Sint,Sint, R,G,Zero,OneInt) },
	{ 0x0F00, 32,32, 0, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RG32Float), _CS(RG32Float), _(R32_G32, Float,Float,Float,Float, R,G,Zero,OneFloat) },
	{ 0x0701, 32,32, 0, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RG32Uint), _CS(RG32Float), _(R32_G32, Uint,Uint,Uint,Uint, R,G,Zero,OneInt) },
	{ 0x0701, 32,32, 0, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RG32Sint), _CS(RG32Float), _(R32_G32, Sint,Sint,Sint,Sint, R,G,Zero,OneInt) },
	{ 0x0000, 32,32,32, 0, 0, 0,  1, 1, _C(32), 0x00, 0x00, _CS(R8Unorm), _(R32_G32_B32, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0001, 32,32,32, 0, 0, 0,  1, 1, _C(32), 0x00, 0x00, _CS(R8Unorm), _(R32_G32_B32, Uint,Uint,Uint,Uint, R,G,B,OneInt) },
	{ 0x0001, 32,32,32, 0, 0, 0,  1, 1, _C(32), 0x00, 0x00, _CS(R8Unorm), _(R32_G32_B32, Sint,Sint,Sint,Sint, R,G,B,OneInt) },
	{ 0x0F04,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Unorm), _CS(RGBA8Unorm), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0F00,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Snorm), _CS(RGBA8Snorm), _(A8R8G8B8, Snorm,Snorm,Snorm,Snorm, R,G,B,A) },
	{ 0x0701,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Uint), _CS(BGRA8Unorm), _(A8R8G8B8, Uint,Uint,Uint,Uint, R,G,B,A) },
	{ 0x0701,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Sint), _CS(BGRA8Unorm), _(A8R8G8B8, Sint,Sint,Sint,Sint, R,G,B,A) },
	{ 0x0F00, 16,16,16,16, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Float), _CS(RGBA16Float), _(R16_G16_B16_A16, Float,Float,Float,Float, R,G,B,A) },
	{ 0x0F04, 16,16,16,16, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Unorm), _CS(RGBA16Unorm), _(R16_G16_B16_A16, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0F00, 16,16,16,16, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Snorm), _CS(RGBA16Snorm), _(R16_G16_B16_A16, Snorm,Snorm,Snorm,Snorm, R,G,B,A) },
	{ 0x0701, 16,16,16,16, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Uint), _CS(RGBA16Float), _(R16_G16_B16_A16, Uint,Uint,Uint,Uint, R,G,B,A) },
	{ 0x0701, 16,16,16,16, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Sint), _CS(RGBA16Float), _(R16_G16_B16_A16, Sint,Sint,Sint,Sint, R,G,B,A) },
	{ 0x0F00, 32,32,32,32, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBA32Float), _CS(RGBA32Float), _(R32_G32_B32_A32, Float,Float,Float,Float, R,G,B,A) },
	{ 0x0701, 32,32,32,32, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBA32Uint), _CS(RGBA32Float), _(R32_G32_B32_A32, Uint,Uint,Uint,Uint, R,G,B,A) },
	{ 0x0701, 32,32,32,32, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBA32Sint), _CS(RGBA32Float), _(R32_G32_B32_A32, Sint,Sint,Sint,Sint, R,G,B,A) },
	{ 0x0500,  0, 0, 0, 0, 0, 8,  1, 1, _C(8), _D(S8), _DS(S8Uint), _CS(R8Unorm), _(R8, Uint,Uint,Uint,Uint, R,Zero,Zero,OneInt) },
	{ 0x0504,  0, 0, 0, 0,16, 0,  1, 1, _C(16), _D(Z16), _DS(Z16Unorm), _CS(R16Unorm), _(Z16, Unorm,Unorm,Unorm,Unorm, G,G,G,OneFloat) },
	{ 0x0500,  0, 0, 0, 0,24, 0,  1, 1, _C(32), _D(Z24S8), _DS(S8Z24Unorm), _CS(BGRA8Unorm), _(Z24S8, Uint,Unorm,Unorm,Unorm, G,G,G,OneFloat) },
	{ 0x0508,  0, 0, 0, 0,32, 0,  1, 1, _C(32), _D(ZF32), _DS(Z32Float), _CS(R32Float), _(ZF32, Float,Float,Float,Float, R,R,R,OneFloat) },
	{ 0x0500,  0, 0, 0, 0,24, 8,  1, 1, _C(32), _D(Z24S8), _DS(S8Z24Unorm), _CS(BGRA8Unorm), _(Z24S8, Uint,Unorm,Unorm,Unorm, G,G,G,OneFloat) },
	{ 0x0508,  0, 0, 0, 0,32, 8,  1, 1, _C(64), _D(ZF32_X24S8), _DS(Z32S8X24Float), _CS(RG32Float), _(ZF32_X24S8, Float,Uint,Unorm,Unorm, R,R,R,OneFloat) },
	{ 0x0D06,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBX8Srgb), _CS(RGBX8Srgb), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0D06,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Srgb), _CS(RGBA8Srgb), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  4, 4, 4, 4, 0, 0,  1, 1, _C(16), 0x00, 0x00, _CS(BGR5A1Unorm), _(A4B4G4R4, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0C04,  5, 5, 5, 0, 0, 0,  1, 1, _C(16), 0x00, 0x00, _CS(BGR5X1Unorm), _(A1B5G5R5, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0C04,  5, 5, 5, 1, 0, 0,  1, 1, _C(16), 0x00, 0x00, _CS(BGR5A1Unorm), _(A1B5G5R5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0C04,  5, 6, 5, 0, 0, 0,  1, 1, _C(16), 0x00, 0x00, _CS(B5G6R5Unorm), _(B5G6R5, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0F04, 10,10,10, 2, 0, 0,  1, 1, _C(32), 0x00, _CS(RGB10A2Unorm), _CS(RGB10A2Unorm), _(A2B10G10R10, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0701, 10,10,10, 2, 0, 0,  1, 1, _C(32), 0x00, _CS(RGB10A2Uint), _CS(RGB10A2Unorm), _(A2B10G10R10, Uint,Uint,Uint,Uint, R,G,B,A) },
	{ 0x0F00, 11,11,10, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(R11G11B10Float), _CS(R11G11B10Float), _(BF10GF11RF11, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0400,  9, 9, 9, 0, 0, 0,  1, 1, _C(32), 0x00, 0x00, _CS(BGRA8Unorm), _(E5B9G9R9_SHAREDEXP, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXT1, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXT1, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXT23, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXT45, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXT1, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXT1, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXT23, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXT45, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXN1, Unorm,Unorm,Unorm,Unorm, R,Zero,Zero,OneFloat) },
	{ 0x0400,  0, 0, 0, 0, 0, 0,  4, 4, _C(64), 0x00, 0x00, _CS(RG32Float), _(DXN1, Snorm,Snorm,Snorm,Snorm, R,Zero,Zero,OneFloat) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXN2, Unorm,Unorm,Unorm,Unorm, R,G,Zero,OneFloat) },
	{ 0x0400,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(DXN2, Snorm,Snorm,Snorm,Snorm, R,G,Zero,OneFloat) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(BC7U, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(BC7U, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0400,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(BC6H_SF16, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0400,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(BC6H_UF16, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0D04,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBX8Unorm), _CS(RGBX8Unorm), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0D00,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Snorm), _CS(RGBA8Snorm), _(A8R8G8B8, Snorm,Snorm,Snorm,Snorm, R,G,B,OneFloat) },
	{ 0x0501,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Uint), _CS(BGRA8Unorm), _(A8R8G8B8, Uint,Uint,Uint,Uint, R,G,B,OneInt) },
	{ 0x0501,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(RGBA8Sint), _CS(BGRA8Unorm), _(A8R8G8B8, Sint,Sint,Sint,Sint, R,G,B,OneInt) },
	{ 0x0D00, 16,16,16, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBX16Float), _CS(RGBX16Float), _(R16_G16_B16_A16, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0D04, 16,16,16, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Unorm), _CS(RGBA16Unorm), _(R16_G16_B16_A16, Unorm,Unorm,Unorm,Unorm, R,G,B,OneFloat) },
	{ 0x0D00, 16,16,16, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Snorm), _CS(RGBA16Snorm), _(R16_G16_B16_A16, Snorm,Snorm,Snorm,Snorm, R,G,B,OneFloat) },
	{ 0x0501, 16,16,16, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Uint), _CS(RGBA16Float), _(R16_G16_B16_A16, Uint,Uint,Uint,Uint, R,G,B,OneInt) },
	{ 0x0501, 16,16,16, 0, 0, 0,  1, 1, _C(64), 0x00, _CS(RGBA16Sint), _CS(RGBA16Float), _(R16_G16_B16_A16, Sint,Sint,Sint,Sint, R,G,B,OneInt) },
	{ 0x0D00, 32,32,32, 0, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBX32Float), _CS(RGBX32Float), _(R32_G32_B32_A32, Float,Float,Float,Float, R,G,B,OneFloat) },
	{ 0x0501, 32,32,32, 0, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBX32Uint), _CS(RGBA32Float), _(R32_G32_B32_A32, Uint,Uint,Uint,Uint, R,G,B,OneInt) },
	{ 0x0501, 32,32,32, 0, 0, 0,  1, 1, _C(128), 0x00, _CS(RGBX32Sint), _CS(RGBA32Float), _(R32_G32_B32_A32, Sint,Sint,Sint,Sint, R,G,B,OneInt) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_4X4, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  5, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_5X4, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  5, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_5X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  6, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_6X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  6, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_6X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  8, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  8, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0,  8, 8, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 10, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 10, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 10, 8, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 10,10, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X10, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 12,10, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_12X10, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0404,  0, 0, 0, 0, 0, 0, 12,12, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_12X12, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  4, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_4X4, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  5, 4, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_5X4, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  5, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_5X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  6, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_6X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  6, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_6X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  8, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  8, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0,  8, 8, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_8X8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 10, 5, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X5, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 10, 6, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X6, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 10, 8, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X8, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 10,10, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_10X10, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 12,10, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_12X10, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0406,  0, 0, 0, 0, 0, 0, 12,12, _C(128), 0x00, 0x00, _CS(RGBA32Float), _(ASTC_2D_12X12, Unorm,Unorm,Unorm,Unorm, R,G,B,A) },
	{ 0x0D04,  5, 6, 5, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(B5G6R5Unorm), _CS(B5G6R5Unorm), _(B5G6R5, Unorm,Unorm,Unorm,Unorm, B,G,R,OneFloat) },
	{ 0x0D04,  5, 5, 5, 0, 0, 0,  1, 1, _C(16), 0x00, _CS(BGR5X1Unorm), _CS(BGR5X1UnormUnknownFB), _(A1B5G5R5, Unorm,Unorm,Unorm,Unorm, B,G,R,OneFloat) },
	{ 0x0D04,  5, 5, 5, 1, 0, 0,  1, 1, _C(16), 0x00, _CS(BGR5A1Unorm), _CS(BGR5A1Unorm), _(A1B5G5R5, Unorm,Unorm,Unorm,Unorm, B,G,R,A) },
	{ 0x0404,  5, 5, 5, 1, 0, 0,  1, 1, _C(16), 0x00, 0x00, _CS(BGR5A1Unorm), _(A5B5G5R1, Unorm,Unorm,Unorm,Unorm, A,B,G,R) },
	{ 0x0D04,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(BGRX8Unorm), _CS(BGRX8Unorm), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, B,G,R,OneFloat) },
	{ 0x0F04,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(BGRA8Unorm), _CS(BGRA8Unorm), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, B,G,R,A) },
	{ 0x0D06,  8, 8, 8, 0, 0, 0,  1, 1, _C(32), 0x00, _CS(BGRX8Srgb), _CS(BGRX8Srgb), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, B,G,R,OneFloat) },
	{ 0x0D06,  8, 8, 8, 8, 0, 0,  1, 1, _C(32), 0x00, _CS(BGRA8Srgb), _CS(BGRA8Srgb), _(A8R8G8B8, Unorm,Unorm,Unorm,Unorm, B,G,R,A) },