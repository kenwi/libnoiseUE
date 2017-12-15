// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibnoiseExamples.generated.h"

/**
 * 
 */
UCLASS()
class LIBNOISEUE_API ULibnoiseExamples : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void CreateTerrainHeightMapGrayscale();

	UFUNCTION(BlueprintCallable)
		static void CreateSphericalPlanetaryTerrain();

	UFUNCTION(BlueprintCallable)
		static void CreateComplexPlanet();

	UFUNCTION(BlueprintCallable)
		static void CreateCloudsOverWater();
};
