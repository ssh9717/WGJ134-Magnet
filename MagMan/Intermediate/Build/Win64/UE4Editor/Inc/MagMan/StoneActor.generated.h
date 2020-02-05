// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MAGMAN_StoneActor_generated_h
#error "StoneActor.generated.h already included, missing '#pragma once' in StoneActor.h"
#endif
#define MAGMAN_StoneActor_generated_h

#define MagMan_Source_MagMan_StoneActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MagMan_Source_MagMan_StoneActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MagMan_Source_MagMan_StoneActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStoneActor(); \
	friend struct Z_Construct_UClass_AStoneActor_Statics; \
public: \
	DECLARE_CLASS(AStoneActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AStoneActor)


#define MagMan_Source_MagMan_StoneActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAStoneActor(); \
	friend struct Z_Construct_UClass_AStoneActor_Statics; \
public: \
	DECLARE_CLASS(AStoneActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagMan"), NO_API) \
	DECLARE_SERIALIZER(AStoneActor)


#define MagMan_Source_MagMan_StoneActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStoneActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStoneActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStoneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStoneActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStoneActor(AStoneActor&&); \
	NO_API AStoneActor(const AStoneActor&); \
public:


#define MagMan_Source_MagMan_StoneActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStoneActor(AStoneActor&&); \
	NO_API AStoneActor(const AStoneActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStoneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStoneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStoneActor)


#define MagMan_Source_MagMan_StoneActor_h_14_PRIVATE_PROPERTY_OFFSET
#define MagMan_Source_MagMan_StoneActor_h_11_PROLOG
#define MagMan_Source_MagMan_StoneActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_StoneActor_h_14_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_StoneActor_h_14_RPC_WRAPPERS \
	MagMan_Source_MagMan_StoneActor_h_14_INCLASS \
	MagMan_Source_MagMan_StoneActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagMan_Source_MagMan_StoneActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagMan_Source_MagMan_StoneActor_h_14_PRIVATE_PROPERTY_OFFSET \
	MagMan_Source_MagMan_StoneActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MagMan_Source_MagMan_StoneActor_h_14_INCLASS_NO_PURE_DECLS \
	MagMan_Source_MagMan_StoneActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGMAN_API UClass* StaticClass<class AStoneActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagMan_Source_MagMan_StoneActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
