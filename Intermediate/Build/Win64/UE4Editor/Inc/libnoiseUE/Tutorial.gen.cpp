// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorial() {}
// Cross Module References
	LIBNOISEUE_API UClass* Z_Construct_UClass_UTutorial_NoRegister();
	LIBNOISEUE_API UClass* Z_Construct_UClass_UTutorial();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_libnoiseUE();
	LIBNOISEUE_API UFunction* Z_Construct_UFunction_UTutorial_LibNoiseCreateSphericalPlanetaryTerrain();
	LIBNOISEUE_API UFunction* Z_Construct_UFunction_UTutorial_LibNoiseCreateTerrainHeightMapGrayscale();
// End Cross Module References
	void UTutorial::StaticRegisterNativesUTutorial()
	{
		UClass* Class = UTutorial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LibNoiseCreateSphericalPlanetaryTerrain", (Native)&UTutorial::execLibNoiseCreateSphericalPlanetaryTerrain },
			{ "LibNoiseCreateTerrainHeightMapGrayscale", (Native)&UTutorial::execLibNoiseCreateTerrainHeightMapGrayscale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTutorial_LibNoiseCreateSphericalPlanetaryTerrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Tutorial.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorial, "LibNoiseCreateSphericalPlanetaryTerrain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTutorial_LibNoiseCreateTerrainHeightMapGrayscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Tutorial.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorial, "LibNoiseCreateTerrainHeightMapGrayscale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorial_NoRegister()
	{
		return UTutorial::StaticClass();
	}
	UClass* Z_Construct_UClass_UTutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_libnoiseUE,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTutorial_LibNoiseCreateSphericalPlanetaryTerrain, "LibNoiseCreateSphericalPlanetaryTerrain" }, // 950210038
				{ &Z_Construct_UFunction_UTutorial_LibNoiseCreateTerrainHeightMapGrayscale, "LibNoiseCreateTerrainHeightMapGrayscale" }, // 3242875481
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tutorial.h" },
				{ "ModuleRelativePath", "Public/Tutorial.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTutorial>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTutorial::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorial, 655725976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorial(Z_Construct_UClass_UTutorial, &UTutorial::StaticClass, TEXT("/Script/libnoiseUE"), TEXT("UTutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
