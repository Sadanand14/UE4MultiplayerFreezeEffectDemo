// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GAS_PRACTICE_GAS_FPCAttributeSet_generated_h
#error "GAS_FPCAttributeSet.generated.h already included, missing '#pragma once' in GAS_FPCAttributeSet.h"
#endif
#define GAS_PRACTICE_GAS_FPCAttributeSet_generated_h

#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_SPARSE_DATA
#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ThawRate); \
	DECLARE_FUNCTION(execOnRep_FreezePercentage);


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ThawRate); \
	DECLARE_FUNCTION(execOnRep_FreezePercentage);


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_FPCAttributeSet(); \
	friend struct Z_Construct_UClass_UGAS_FPCAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGAS_FPCAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS_Practice"), NO_API) \
	DECLARE_SERIALIZER(UGAS_FPCAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FreezePercentage=NETFIELD_REP_START, \
		ThawRate, \
		NETFIELD_REP_END=ThawRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGAS_FPCAttributeSet) \
public:


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGAS_FPCAttributeSet(); \
	friend struct Z_Construct_UClass_UGAS_FPCAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGAS_FPCAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS_Practice"), NO_API) \
	DECLARE_SERIALIZER(UGAS_FPCAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FreezePercentage=NETFIELD_REP_START, \
		ThawRate, \
		NETFIELD_REP_END=ThawRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGAS_FPCAttributeSet) \
public:


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAS_FPCAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAS_FPCAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_FPCAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_FPCAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAS_FPCAttributeSet(UGAS_FPCAttributeSet&&); \
	NO_API UGAS_FPCAttributeSet(const UGAS_FPCAttributeSet&); \
public:


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAS_FPCAttributeSet(UGAS_FPCAttributeSet&&); \
	NO_API UGAS_FPCAttributeSet(const UGAS_FPCAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_FPCAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_FPCAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_FPCAttributeSet)


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_PRIVATE_PROPERTY_OFFSET
#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_21_PROLOG
#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_PRIVATE_PROPERTY_OFFSET \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_SPARSE_DATA \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_RPC_WRAPPERS \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_INCLASS \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_PRIVATE_PROPERTY_OFFSET \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_SPARSE_DATA \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
	GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAS_PRACTICE_API UClass* StaticClass<class UGAS_FPCAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAS_Practice_Source_GAS_Practice_GAS_FPCAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
