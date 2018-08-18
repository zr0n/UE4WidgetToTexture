// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetToTexture/Public/WidgetToTextureStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetToTextureStatics() {}
// Cross Module References
	WIDGETTOTEXTURE_API UClass* Z_Construct_UClass_UWidgetToTextureStatics_NoRegister();
	WIDGETTOTEXTURE_API UClass* Z_Construct_UClass_UWidgetToTextureStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WidgetToTexture();
	WIDGETTOTEXTURE_API UFunction* Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UWidgetToTextureStatics::StaticRegisterNativesUWidgetToTextureStatics()
	{
		UClass* Class = UWidgetToTextureStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WidgetToTexture", &UWidgetToTextureStatics::execWidgetToTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics
	{
		struct WidgetToTextureStatics_eventWidgetToTexture_Parms
		{
			UUserWidget* Widget;
			FVector2D DrawSize;
			bool bUseGameCorrection;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseGameCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGameCorrection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetToTextureStatics_eventWidgetToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_bUseGameCorrection_SetBit(void* Obj)
	{
		((WidgetToTextureStatics_eventWidgetToTexture_Parms*)Obj)->bUseGameCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_bUseGameCorrection = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGameCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetToTextureStatics_eventWidgetToTexture_Parms), &Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_bUseGameCorrection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_DrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetToTextureStatics_eventWidgetToTexture_Parms, DrawSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetToTextureStatics_eventWidgetToTexture_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_bUseGameCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_DrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetToTextureStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetToTextureStatics, "WidgetToTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04842401, sizeof(WidgetToTextureStatics_eventWidgetToTexture_Parms), Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetToTextureStatics_NoRegister()
	{
		return UWidgetToTextureStatics::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetToTextureStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetToTextureStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetToTexture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetToTextureStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetToTextureStatics_WidgetToTexture, "WidgetToTexture" }, // 2310116445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetToTextureStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetToTextureStatics.h" },
		{ "ModuleRelativePath", "Public/WidgetToTextureStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetToTextureStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetToTextureStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetToTextureStatics_Statics::ClassParams = {
		&UWidgetToTextureStatics::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetToTextureStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetToTextureStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetToTextureStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetToTextureStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetToTextureStatics, 2172308873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetToTextureStatics(Z_Construct_UClass_UWidgetToTextureStatics, &UWidgetToTextureStatics::StaticClass, TEXT("/Script/WidgetToTexture"), TEXT("UWidgetToTextureStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetToTextureStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
