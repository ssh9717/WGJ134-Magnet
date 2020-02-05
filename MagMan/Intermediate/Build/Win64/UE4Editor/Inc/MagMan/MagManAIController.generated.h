// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGMAN_MagManAIController_generated_h
#error "MagManAIController.generated.h already included, missing '#pragma once' in MagManAIController.h"
#endif
#define MAGMAN_MagManAIController_generated_h

#define MagMan_Source_MagMan_MagManAIController_h_16_RPC_WRAPPERS
#define MagMan_Source_MagMan_MagManAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MagMan_Source_MagMan_MagManAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagManAIController(); \
	friend struct Z_Construct_UClass_AMagManAIController_Statics; \
public: \
	DECLARE_CLASS(AMagManAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManAIController)


#define MagMan_Source_MagMan_MagManAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMagManAIController(); \
	friend struct Z_Construct_UClass_AMagManAIController_Statics; \
public: \
	DECLARE_CLASS(AMagManAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManAIController)


#define MagMan_Source_MagMan_MagManAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManAIController(AMagManAIController&&); \
	NO_API AMagManAIController(const AMagManAIController&); \
public:


#define MagMan_Source_MagMan_MagManAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManAIController(AMagManAIController&&); \
	NO_API AMagManAIController(const AMagManAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagManAIController)


#define MagMan_Source_MagMan_MagManAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BTAsset() { return STRUCT_OFFSET(AMagManAIController, BTAsset); } \
	FORCEINLINE static uint32 __PPO__BBAsset() { return STRUCT_OFFSET(AMagManAIController, BBAsset); }


#define MagMan_Source_MagMan_MagManAIController_h_13_PROLOG
#define MagMan_Source_MagMan_MagManAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManAIController_h_16_RPC_WRAPPERS \
	MagMan_Source_MagMan_MagManAIController_h_16_INCLASS \
	MagMan_Source_MagMan_MagManAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagMan_Source_MagMan_MagManAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManAIController_h_16_INCLASS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGMAN_API UClass* StaticClass<class AMagManAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagMan_Source_MagMan_MagManAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
