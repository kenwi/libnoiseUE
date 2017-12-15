#include "Tutorial.h"

#include "libnoise.h"
#include "noiseutils.h"

using namespace noise;

void UTutorial::LibNoiseCreateTerrainHeightMapGrayscale()
{
	int Width(256), Height(256);
	module::Perlin PerlinNoise;
	utils::NoiseMap HeightMap;

	utils::NoiseMapBuilderPlane HeightMapBuilder;
	HeightMapBuilder.SetSourceModule(PerlinNoise);
	HeightMapBuilder.SetDestNoiseMap(HeightMap);
	HeightMapBuilder.SetDestSize(Width, Height);
	HeightMapBuilder.SetBounds(2.0, 6.0, 1.0, 5.0);
	HeightMapBuilder.Build();

	utils::RendererImage Renderer;
	utils::Image Image;
	Renderer.SetSourceNoiseMap(HeightMap);
	Renderer.SetDestImage(Image);
	Renderer.Render();

	utils::WriterBMP Writer;
	Writer.SetSourceImage(Image);
	Writer.SetDestFilename("C:\\Users\\wilken\\Documents\\UnrealProjects\\LibNoise-Example\\Tutorial.bmp");
	Writer.WriteDestFile();
}

void UTutorial::LibNoiseCreateSphericalPlanetaryTerrain()
{
	int Width(16192), Height(16192);
	module::Perlin PerlinNoise;
	utils::NoiseMap HeightMap;

	utils::NoiseMapBuilderSphere HeightMapBuilder;
	HeightMapBuilder.SetSourceModule(PerlinNoise);
	HeightMapBuilder.SetDestNoiseMap(HeightMap);
	HeightMapBuilder.SetDestSize(Width, Height);
	HeightMapBuilder.SetBounds(-90.0, 90.0, -180.0, 180.0);
	HeightMapBuilder.Build();

	utils::RendererImage Renderer;
	utils::Image image;
	Renderer.SetSourceNoiseMap(HeightMap);
	Renderer.SetDestImage(image);
	Renderer.ClearGradient();
	Renderer.AddGradientPoint(-1.0000, utils::Color(0, 0, 128, 255)); // deeps
	Renderer.AddGradientPoint(-0.2500, utils::Color(0, 0, 255, 255)); // shallow
	Renderer.AddGradientPoint(0.0000, utils::Color(0, 128, 255, 255)); // shore
	Renderer.AddGradientPoint(0.0625, utils::Color(240, 240, 64, 255)); // sand
	Renderer.AddGradientPoint(0.1250, utils::Color(32, 160, 0, 255)); // grass
	Renderer.AddGradientPoint(0.3750, utils::Color(224, 224, 0, 255)); // dirt
	Renderer.AddGradientPoint(0.7500, utils::Color(128, 128, 128, 255)); // rock
	Renderer.AddGradientPoint(1.0000, utils::Color(255, 255, 255, 255)); // snow
	Renderer.EnableLight();
	Renderer.SetLightContrast(3.0);
	Renderer.SetLightBrightness(2.0);
	Renderer.Render();

	utils::WriterBMP Writer;
	Writer.SetSourceImage(image);
	Writer.SetDestFilename("C:\\Users\\wilken\\Documents\\UnrealProjects\\LibNoise-Example\\PlanetaryTerrain.bmp");	
	Writer.WriteDestFile();
}
