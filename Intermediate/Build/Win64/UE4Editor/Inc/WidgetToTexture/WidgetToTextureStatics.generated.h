// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FVector2D;
class UTexture2D;
#ifdef WIDGETTOTEXTURE_WidgetToTextureStatics_generated_h
#error "WidgetToTextureStatics.generated.h already included, missing '#pragma once' in WidgetToTextureStatics.h"
#endif
#define WIDGETTOTEXTURE_WidgetToTextureStatics_generated_h

#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWidgetToTexture) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_UBOOL(Z_Param_bUseGameCorrection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UWidgetToTextureStatics::WidgetToTexture(Z_Param_Widget,Z_Param_DrawSize,Z_Param_bUseGameCorrection); \
		P_NATIVE_END; \
	}


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWidgetToTexture) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_GET_STRUCT(FVector2D,Z_Param_DrawSize); \
		P_GET_UBOOL(Z_Param_bUseGameCorrection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UWidgetToTextureStatics::WidgetToTexture(Z_Param_Widget,Z_Param_DrawSize,Z_Param_bUseGameCorrection); \
		P_NATIVE_END; \
	}


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetToTextureStatics(); \
	friend struct Z_Construct_UClass_UWidgetToTextureStatics_Statics; \
public: \
	DECLARE_CLASS(UWidgetToTextureStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetToTexture"), NO_API) \
	DECLARE_SERIALIZER(UWidgetToTextureStatics)


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetToTextureStatics(); \
	friend struct Z_Construct_UClass_UWidgetToTextureStatics_Statics; \
public: \
	DECLARE_CLASS(UWidgetToTextureStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetToTexture"), NO_API) \
	DECLARE_SERIALIZER(UWidgetToTextureStatics)


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetToTextureStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetToTextureStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetToTextureStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetToTextureStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetToTextureStatics(UWidgetToTextureStatics&&); \
	NO_API UWidgetToTextureStatics(const UWidgetToTextureStatics&); \
public:


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetToTextureStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetToTextureStatics(UWidgetToTextureStatics&&); \
	NO_API UWidgetToTextureStatics(const UWidgetToTextureStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetToTextureStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetToTextureStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetToTextureStatics)


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_PRIVATE_PROPERTY_OFFSET
#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_13_PROLOG
#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_PRIVATE_PROPERTY_OFFSET \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_RPC_WRAPPERS \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_INCLASS \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_PRIVATE_PROPERTY_OFFSET \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_INCLASS_NO_PURE_DECLS \
	Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playground_Plugins_WidgetToTexture_Source_WidgetToTexture_Public_WidgetToTextureStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
