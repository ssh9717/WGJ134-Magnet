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
	MAGMAN_API UFunction* Z_Construct_UFunction_AMagManAIController_DeleteTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AMagManAIController::StaticRegisterNativesAMagManAIController()
	{
		UClass* Class = AMagManAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteTarget", &AMagManAIController::execDeleteTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagManAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagManAIController, nullptr, "DeleteTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagManAIController_DeleteTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagManAIController_DeleteTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagManAIController_NoRegister()
	{
		return AMagManAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMagManAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagManAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MagMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagManAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagManAIController_DeleteTarget, "DeleteTarget" }, // 3183175386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagManAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagManAIController.h" },
		{ "ModuleRelativePath", "MagManAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagManAIController_Statics::NewProp_BBAsset_MetaData[] = {
		{ "ModuleRelativePath", "MagManAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagManAIController_Statics::NewProp_BBAsset = { "BBAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagManAIController, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagManAIController_Statics::NewProp_BBAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagManAIController_Statics::NewProp_BBAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagManAIController_Statics::NewProp_BTAsset_MetaData[] = {
		{ "ModuleRelativePath", "MagManAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagManAIController_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagManAIController, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagManAIController_Statics::NewProp_BTAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagManAIController_Statics::NewProp_BTAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagManAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagManAIController_Statics::NewProp_BBAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagManAIController_Statics::NewProp_BTAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagManAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagManAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagManAIController_Statics::ClassParams = {
		&AMagManAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagManAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMagManAIController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMagManAIController, 1052223790);
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
