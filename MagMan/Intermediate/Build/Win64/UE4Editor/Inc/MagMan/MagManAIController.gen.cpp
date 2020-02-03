// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagMan/MagManAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagManAIController() {}
// Cross Module References
	MAGMAN_API UClass* Z_Construct_UClass_AMagManAIController_NoRegister();
	MAGMAN_API UClass* Z_Construct_UClass_AMagManAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MagMan();
// End Cross Module References
	void AMagManAIController::StaticRegisterNativesAMagManAIController()
	{
	}
	UClass* Z_Construct_UClass_AMagManAIController_NoRegister()
	{
		return AMagManAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMagManAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagManAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MagMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagManAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagManAIController.h" },
		{ "ModuleRelativePath", "MagManAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagManAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagManAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagManAIController_Statics::ClassParams = {
		&AMagManAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMagManAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMagManAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagManAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagManAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagManAIController, 2522968848);
	template<> MAGMAN_API UClass* StaticClass<AMagManAIController>()
	{
		return AMagManAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagManAIController(Z_Construct_UClass_AMagManAIController, &AMagManAIController::StaticClass, TEXT("/Script/MagMan"), TEXT("AMagManAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagManAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
