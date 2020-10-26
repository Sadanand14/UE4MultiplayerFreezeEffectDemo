// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Practice/GASCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASCharacter() {}
// Cross Module References
	GAS_PRACTICE_API UClass* Z_Construct_UClass_AGASCharacter_NoRegister();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_AGASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GAS_Practice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_GameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_FPCAttributeSet_NoRegister();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void AGASCharacter::StaticRegisterNativesAGASCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGASCharacter_NoRegister()
	{
		return AGASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassiveAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilties;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAbilties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributeEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GAS_Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GASCharacter.h" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities_MetaData[] = {
		{ "Category", "Abilities|Passives" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGASCharacter, PassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities_Inner = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAS_GameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties = { "DefaultAbilties", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGASCharacter, DefaultAbilties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties_Inner = { "DefaultAbilties", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGAS_GameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects = { "DefaultAttributeEffects", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGASCharacter, DefaultAttributeEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects_Inner = { "DefaultAttributeEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::NewProp_attributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_attributeSet = { "attributeSet", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGASCharacter, attributeSet), Z_Construct_UClass_UGAS_FPCAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::NewProp_attributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::NewProp_attributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGASCharacter, AbilityComponent), Z_Construct_UClass_UGASAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_PassiveAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAbilties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_DefaultAttributeEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_attributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilityComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGASCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGASCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGASCharacter_Statics::ClassParams = {
		&AGASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGASCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGASCharacter, 1985664591);
	template<> GAS_PRACTICE_API UClass* StaticClass<AGASCharacter>()
	{
		return AGASCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGASCharacter(Z_Construct_UClass_AGASCharacter, &AGASCharacter::StaticClass, TEXT("/Script/GAS_Practice"), TEXT("AGASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
