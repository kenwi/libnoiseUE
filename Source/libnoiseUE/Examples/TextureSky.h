#pragma once

#include "libnoise.h"
#include "noiseutils.h"

using namespace noise;

// Height of the texture.
const int TEXTURE_HEIGHT = 256;

// Creates the color gradients for the texture.
//void CreateTextureColor(utils::RendererImage& renderer);

// Given two noise modules, this function renders two flat square texture maps
// and combines them to form a Windows bitmap (*.bmp) file.  Because the
// texture map is square, its width is equal to its height.  The final texture
// map can be seamless (tileable) or non-seamless.
void CreatePlanarTexture(const module::Module& lowerNoiseModule,
	const module::Module& upperNoiseModule, bool seamless, int height,
	const char* filename);

// Given two noise modules, this function renders two spherical texture maps
// and combines them to form a Windows bitmap (*.bmp) file.  The texture map's
// width is double its height.
void CreateSphericalTexture(const module::Module& lowerNoiseModule,
	const module::Module& upperNoiseModule, int height, const char* filename);

// Given two noise maps, this function renders two texture maps and combines
// them to form a Windows bitmap (*.bmp) file.
void RenderTexture(const utils::NoiseMap& lowerNoiseMap,
	const utils::NoiseMap& upperNoiseMap, const char* filename);
