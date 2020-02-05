// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagMan/BTTask_Turn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Turn() {}
// Cross Module References
	MAGMAN_API UClass* Z_Construct_UClass_UBTTask_Turn_NoRegister();
	MAGMAN_API UClass* Z_Construct_UClass_UBTTask_Turn();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_MagMan();
// End Cross Module References
	void UBTTask_Turn::StaticRegisterNativesUBTTask_Turn()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Turn_NoRegister()
	{
		return UBTTask_Turn::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Turn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Turn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MagMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Turn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Turn.h" },
		{ "ModuleRelativePath", "BTTask_Turn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Turn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Turn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Turn_Statics::ClassParams = {
		&UBTTask_Turn::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Turn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_Turn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Turn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Turn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Turn, 1569748997);
	template<> MAGMAN_API UClass* StaticClass<UBTTask_Turn>()
	{
		return UBTTask_Turn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Turn(Z_Construct_UClass_UBTTask_Turn, &UBTTask_Turn::StaticClass, TEXT("/Script/MagMan"), TEXT("UBTTask_Turn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Turn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
