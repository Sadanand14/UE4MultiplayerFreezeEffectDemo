// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Practice/GAS_GameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GameplayAbility() {}
// Cross Module References
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_GameplayAbility_NoRegister();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_GameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_GAS_Practice();
	GAS_PRACTICE_API UEnum* Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID();
// End Cross Module References
	void UGAS_GameplayAbility::StaticRegisterNativesUGAS_GameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UGAS_GameplayAbility_NoRegister()
	{
		return UGAS_GameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGAS_GameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_abilityInputId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_abilityInputId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_abilityInputId_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAS_GameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GAS_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_GameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS_GameplayAbility.h" },
		{ "ModuleRelativePath", "GAS_GameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GAS_GameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId = { "abilityInputId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_GameplayAbility, abilityInputId), Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GameplayAbility_Statics::NewProp_abilityInputId_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAS_GameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GameplayAbility_Statics::ClassParams = {
		&UGAS_GameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAS_GameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAS_GameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAS_GameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAS_GameplayAbility, 789492641);
	template<> GAS_PRACTICE_API UClass* StaticClass<UGAS_GameplayAbility>()
	{
		return UGAS_GameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAS_GameplayAbility(Z_Construct_UClass_UGAS_GameplayAbility, &UGAS_GameplayAbility::StaticClass, TEXT("/Script/GAS_Practice"), TEXT("UGAS_GameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
