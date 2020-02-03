// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGMAN_MagManPlayerController_generated_h
#error "MagManPlayerController.generated.h already included, missing '#pragma once' in MagManPlayerController.h"
#endif
#define MAGMAN_MagManPlayerController_generated_h

#define MagMan_Source_MagMan_MagManPlayerController_h_15_RPC_WRAPPERS
#define MagMan_Source_MagMan_MagManPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MagMan_Source_MagMan_MagManPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagManPlayerController(); \
	friend struct Z_Construct_UClass_AMagManPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMagManPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManPlayerController)


#define MagMan_Source_MagMan_MagManPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMagManPlayerController(); \
	friend struct Z_Construct_UClass_AMagManPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMagManPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AMagManPlayerController)


#define MagMan_Source_MagMan_MagManPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManPlayerController(AMagManPlayerController&&); \
	NO_API AMagManPlayerController(const AMagManPlayerController&); \
public:


#define MagMan_Source_MagMan_MagManPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagManPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagManPlayerController(AMagManPlayerController&&); \
	NO_API AMagManPlayerController(const AMagManPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagManPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagManPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagManPlayerController)


#define MagMan_Source_MagMan_MagManPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define MagMan_Source_MagMan_MagManPlayerController_h_12_PROLOG
#define MagMan_Source_MagMan_MagManPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManPlayerController_h_15_RPC_WRAPPERS \
	MagMan_Source_MagMan_MagManPlayerController_h_15_INCLASS \
	MagMan_Source_MagMan_MagManPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagMan_Source_MagMan_MagManPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_MagManPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_MagManPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	MagMan_Source_MagMan_MagManPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGMAN_API UClass* StaticClass<class AMagManPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagMan_Source_MagMan_MagManPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
