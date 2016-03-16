// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANTHROCRATOS_UE4_PlayerStats_generated_h
#error "PlayerStats.generated.h already included, missing '#pragma once' in PlayerStats.h"
#endif
#define ANTHROCRATOS_UE4_PlayerStats_generated_h

#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_RPC_WRAPPERS
#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPlayerStats(); \
	friend ANTHROCRATOS_UE4_API class UClass* Z_Construct_UClass_APlayerStats(); \
	public: \
	DECLARE_CLASS(APlayerStats, AActor, COMPILED_IN_FLAGS(0), 0, Anthrocratos_UE4, NO_API) \
	DECLARE_SERIALIZER(APlayerStats) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APlayerStats*>(this); }


#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesAPlayerStats(); \
	friend ANTHROCRATOS_UE4_API class UClass* Z_Construct_UClass_APlayerStats(); \
	public: \
	DECLARE_CLASS(APlayerStats, AActor, COMPILED_IN_FLAGS(0), 0, Anthrocratos_UE4, NO_API) \
	DECLARE_SERIALIZER(APlayerStats) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<APlayerStats*>(this); }


#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStats); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APlayerStats(const APlayerStats& InCopy); \
public:


#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APlayerStats(const APlayerStats& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerStats)


#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_17_PROLOG
#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_RPC_WRAPPERS \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_INCLASS \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_INCLASS_NO_PURE_DECLS \
	Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Anthrocratos_UE4_Source_Anthrocratos_UE4_PlayerStats_h


#define FOREACH_ENUM_EPLAYERNO(op) \
	op(EPlayerNo::PN_0) \
	op(EPlayerNo::PN_1) \
	op(EPlayerNo::PN_2) \
	op(EPlayerNo::PN_3) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
