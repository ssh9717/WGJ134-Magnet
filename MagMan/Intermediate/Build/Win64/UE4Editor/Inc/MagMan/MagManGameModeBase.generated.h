// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGMAN_MagManGameModeBase_generated_h
#error "MagManGameModeBase.generated.h already included, missing '#pragma once' in MagManGameModeBase.h"
#endif
#define MAGMAN_MagManGameModeBase_generated_h

#define MagMan_Source_MagMan_MagManGameModeBase_h_15_RPC_WRAPPERS
#define MagMan_Source_MagMan_MagManGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MagMan_Source_MagMan_MagManGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagManGameModeBase(); \
	friend struct Z_Construct_UClass_AMagManGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMagManGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManGameModeBase)


#define MagMan_Source_MagMan_MagManGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMagManGameModeBase(); \
	friend struct Z_Construct_UClass_AMagManGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMagManGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManGameModeBase)


#define MagMan_Source_MagMan_MagManGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManGameModeBase(AMagManGameModeBase&&); \
	NO_API AMagManGameModeBase(const AMagManGameModeBase&); \
public:


#define MagMan_Source_MagMan_MagManGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManGameModeBase(AMagManGameModeBase&&); \
	NO_API AMagManGameModeBase(const AMagManGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManGameModeBase)


#define MagMan_Source_MagMan_MagManGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define MagMan_Source_MagMan_MagManGameModeBase_h_12_PROLOG
#define MagMan_Source_MagMan_MagManGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_RPC_WRAPPERS \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_INCLASS \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagMan_Source_MagMan_MagManGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGMAN_API UClass* StaticClass<class AMagManGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagMan_Source_MagMan_MagManGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
