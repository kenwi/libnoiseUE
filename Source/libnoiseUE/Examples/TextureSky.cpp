#include "TextureSky.h"

void CreateTextureColorLayer1(utils::RendererImage& renderer)
{
	// Create a water palette with varying shades of blue.
	renderer.ClearGradient();
	renderer.AddGradientPoint(-1.00, utils::Color(48, 64, 192, 255));
	renderer.AddGradientPoint(0.50, utils::Color(96, 192, 255, 255));
	renderer.AddGradientPoint(1.00, utils::Color(255, 255, 255, 255));
}

void CreateTextureColorLayer2(utils::RendererImage& renderer)
{
	// Create an entirely white palette with varying alpha (transparency) values
	// for the clouds.  These transparent values allows the water to show
	// through.
	renderer.ClearGradient();
	renderer.AddGradientPoint(-1.00, utils::Color(255, 255, 255, 0));
	renderer.AddGradientPoint(-0.50, utils::Color(255, 255, 255, 0));
	renderer.AddGradientPoint(1.00, utils::Color(255, 255, 255, 255));
}

void CreatePlanarTexture(const module::Module& lowerNoiseModule,
	const module::Module& upperNoiseModule, bool seamless, int height,
	const char* filename)
{
	// Map the output values from both noise module onto two planes.  This will
	// create two two-dimensional noise maps which can be rendered as two flat
	// texture maps.
	utils::NoiseMapBuilderPlane plane;
	utils::NoiseMap lowerNoiseMap;
	utils::NoiseMap upperNoiseMap;
	plane.SetBounds(-1.0, 1.0, -1.0, 1.0);
	plane.SetDestSize(height, height);
	plane.EnableSeamless(seamless);

	// Generate the lower noise map.
	plane.SetSourceModule(lowerNoiseModule);
	plane.SetDestNoiseMap(lowerNoiseMap);
	plane.Build();

	// Generate the upper noise map.
	plane.SetSourceModule(upperNoiseModule);
	plane.SetDestNoiseMap(upperNoiseMap);
	plane.Build();

	// Given these two noise maps, render the lower texture map, then render the
	// upper texture map on top of the lower texture map.
	RenderTexture(lowerNoiseMap, upperNoiseMap, filename);
}

void CreateSphericalTexture(const module::Module& lowerNoiseModule,
	const module::Module& upperNoiseModule, int height, const char* filename)
{
	// Map the output values from both noise module onto two spheres.  This will
	// create two two-dimensional noise maps which can be rendered as two
	// spherical texture maps.
	utils::NoiseMapBuilderSphere sphere;
	utils::NoiseMap lowerNoiseMap;
	utils::NoiseMap upperNoiseMap;
	sphere.SetBounds(-90.0, 90.0, -180.0, 180.0); // degrees
	sphere.SetDestSize(height * 2, height);

	// Generate the lower noise map.
	sphere.SetSourceModule(lowerNoiseModule);
	sphere.SetDestNoiseMap(lowerNoiseMap);
	sphere.Build();

	// Generate the upper noise map.
	sphere.SetSourceModule(upperNoiseModule);
	sphere.SetDestNoiseMap(upperNoiseMap);
	sphere.Build();

	// Given these two noise maps, render the lower texture map, then render the
	// upper texture map on top of the lower texture map.
	RenderTexture(lowerNoiseMap, upperNoiseMap, filename);
}

void RenderTexture(const utils::NoiseMap& lowerNoiseMap,
	const utils::NoiseMap& upperNoiseMap, const char* filename)
{
	// Create the color gradients for the lower texture.
	utils::RendererImage textureRenderer;
	CreateTextureColorLayer1(textureRenderer);

	// Set up us the texture renderer and pass the lower noise map to it.
	utils::Image destTexture;
	textureRenderer.SetSourceNoiseMap(lowerNoiseMap);
	textureRenderer.SetDestImage(destTexture);
	textureRenderer.EnableLight(true);
	textureRenderer.SetLightAzimuth(135.0);
	textureRenderer.SetLightElev(60.0);
	textureRenderer.SetLightContrast(2.0);
	textureRenderer.SetLightColor(utils::Color(255, 255, 255, 0));

	// Render the texture.
	textureRenderer.Render();

	// Create the color gradients for the upper texture.
	CreateTextureColorLayer2(textureRenderer);

	// Set up us the texture renderer and pass the upper noise map to it.  Also
	// use the lower texture map as a background so that the upper texture map
	// can be rendered on top of the lower texture map.
	textureRenderer.SetSourceNoiseMap(upperNoiseMap);
	textureRenderer.SetBackgroundImage(destTexture);
	textureRenderer.SetDestImage(destTexture);
	textureRenderer.EnableLight(false);

	// Render the texture.
	textureRenderer.Render();

	// Write the texture as a Windows bitmap file (*.bmp).
	utils::WriterBMP textureWriter;
	textureWriter.SetSourceImage(destTexture);
	textureWriter.SetDestFilename(filename);
	textureWriter.WriteDestFile();
}

