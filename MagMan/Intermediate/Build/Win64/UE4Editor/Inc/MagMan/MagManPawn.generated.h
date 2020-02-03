// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGMAN_MagManPawn_generated_h
#error "MagManPawn.generated.h already included, missing '#pragma once' in MagManPawn.h"
#endif
#define MAGMAN_MagManPawn_generated_h

#define MagMan_Source_MagMan_MagManPawn_h_16_RPC_WRAPPERS
#define MagMan_Source_MagMan_MagManPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MagMan_Source_MagMan_MagManPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagManPawn(); \
	friend struct Z_Construct_UClass_AMagManPawn_Statics; \
public: \
	DECLARE_CLASS(AMagManPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManPawn)


#define MagMan_Source_MagMan_MagManPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMagManPawn(); \
	friend struct Z_Construct_UClass_AMagManPawn_Statics; \
public: \
	DECLARE_CLASS(AMagManPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManPawn)


#define MagMan_Source_MagMan_MagManPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManPawn(AMagManPawn&&); \
	NO_API AMagManPawn(const AMagManPawn&); \
public:


#define MagMan_Source_MagMan_MagManPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManPawn(AMagManPawn&&); \
	NO_API AMagManPawn(const AMagManPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagManPawn)


#define MagMan_Source_MagMan_MagManPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define MagMan_Source_MagMan_MagManPawn_h_13_PROLOG
#define MagMan_Source_MagMan_MagManPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManPawn_h_16_RPC_WRAPPERS \
	MagMan_Source_MagMan_MagManPawn_h_16_INCLASS \
	MagMan_Source_MagMan_MagManPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagMan_Source_MagMan_MagManPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManPawn_h_16_INCLASS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGMAN_API UClass* StaticClass<class AMagManPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagMan_Source_MagMan_MagManPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
