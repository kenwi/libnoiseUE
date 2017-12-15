// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIBNOISEUE_Tutorial_generated_h
#error "Tutorial.generated.h already included, missing '#pragma once' in Tutorial.h"
#endif
#define LIBNOISEUE_Tutorial_generated_h

#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLibNoiseCreateSphericalPlanetaryTerrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTutorial::LibNoiseCreateSphericalPlanetaryTerrain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLibNoiseCreateTerrainHeightMapGrayscale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTutorial::LibNoiseCreateTerrainHeightMapGrayscale(); \
		P_NATIVE_END; \
	}


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLibNoiseCreateSphericalPlanetaryTerrain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTutorial::LibNoiseCreateSphericalPlanetaryTerrain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLibNoiseCreateTerrainHeightMapGrayscale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTutorial::LibNoiseCreateTerrainHeightMapGrayscale(); \
		P_NATIVE_END; \
	}


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTutorial(); \
	friend LIBNOISEUE_API class UClass* Z_Construct_UClass_UTutorial(); \
public: \
	DECLARE_CLASS(UTutorial, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/libnoiseUE"), NO_API) \
	DECLARE_SERIALIZER(UTutorial) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTutorial(); \
	friend LIBNOISEUE_API class UClass* Z_Construct_UClass_UTutorial(); \
public: \
	DECLARE_CLASS(UTutorial, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/libnoiseUE"), NO_API) \
	DECLARE_SERIALIZER(UTutorial) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorial(UTutorial&&); \
	NO_API UTutorial(const UTutorial&); \
public:


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorial(UTutorial&&); \
	NO_API UTutorial(const UTutorial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorial)


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_PRIVATE_PROPERTY_OFFSET
#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_12_PROLOG
#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_PRIVATE_PROPERTY_OFFSET \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_RPC_WRAPPERS \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_INCLASS \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_PRIVATE_PROPERTY_OFFSET \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_INCLASS_NO_PURE_DECLS \
	AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AlephNull_Plugins_libnoiseUE_Source_libnoiseUE_Public_Tutorial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
