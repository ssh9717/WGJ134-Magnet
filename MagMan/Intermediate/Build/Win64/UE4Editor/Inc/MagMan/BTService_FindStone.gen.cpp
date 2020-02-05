// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagMan/BTService_FindStone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindStone() {}
// Cross Module References
	MAGMAN_API UClass* Z_Construct_UClass_UBTService_FindStone_NoRegister();
	MAGMAN_API UClass* Z_Construct_UClass_UBTService_FindStone();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_MagMan();
// End Cross Module References
	void UBTService_FindStone::StaticRegisterNativesUBTService_FindStone()
	{
	}
	UClass* Z_Construct_UClass_UBTService_FindStone_NoRegister()
	{
		return UBTService_FindStone::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_FindStone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_FindStone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_MagMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FindStone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_FindStone.h" },
		{ "ModuleRelativePath", "BTService_FindStone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_FindStone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindStone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindStone_Statics::ClassParams = {
		&UBTService_FindStone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_FindStone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTService_FindStone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_FindStone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_FindStone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_FindStone, 698698884);
	template<> MAGMAN_API UClass* StaticClass<UBTService_FindStone>()
	{
		return UBTService_FindStone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_FindStone(Z_Construct_UClass_UBTService_FindStone, &UBTService_FindStone::StaticClass, TEXT("/Script/MagMan"), TEXT("UBTService_FindStone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindStone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
