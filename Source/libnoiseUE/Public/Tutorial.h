// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Tutorial.generated.h"

/**
 * 
 */
UCLASS()
class LIBNOISEUE_API UTutorial : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void LibNoiseCreateTerrainHeightMapGrayscale();

	UFUNCTION(BlueprintCallable)
		static void LibNoiseCreateSphericalPlanetaryTerrain();
};
