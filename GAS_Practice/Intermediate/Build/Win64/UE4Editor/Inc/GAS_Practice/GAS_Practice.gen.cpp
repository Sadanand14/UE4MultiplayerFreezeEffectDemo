// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Practice/GAS_Practice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_Practice() {}
// Cross Module References
	GAS_PRACTICE_API UEnum* Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_GAS_Practice();
// End Cross Module References
	static UEnum* EGASAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID, Z_Construct_UPackage__Script_GAS_Practice(), TEXT("EGASAbilityInputID"));
		}
		return Singleton;
	}
	template<> GAS_PRACTICE_API UEnum* StaticEnum<EGASAbilityInputID>()
	{
		return EGASAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGASAbilityInputID(EGASAbilityInputID_StaticEnum, TEXT("/Script/GAS_Practice"), TEXT("EGASAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID_Hash() { return 380031594U; }
	UEnum* Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GAS_Practice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGASAbilityInputID"), 0, Get_Z_Construct_UEnum_GAS_Practice_EGASAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGASAbilityInputID::None", (int64)EGASAbilityInputID::None },
				{ "EGASAbilityInputID::Confirm", (int64)EGASAbilityInputID::Confirm },
				{ "EGASAbilityInputID::Cancel", (int64)EGASAbilityInputID::Cancel },
				{ "EGASAbilityInputID::Fire", (int64)EGASAbilityInputID::Fire },
				{ "EGASAbilityInputID::Ultimate", (int64)EGASAbilityInputID::Ultimate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EGASAbilityInputID::Cancel" },
				{ "Confirm.Name", "EGASAbilityInputID::Confirm" },
				{ "Fire.Name", "EGASAbilityInputID::Fire" },
				{ "ModuleRelativePath", "GAS_Practice.h" },
				{ "None.Name", "EGASAbilityInputID::None" },
				{ "Ultimate.Name", "EGASAbilityInputID::Ultimate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GAS_Practice,
				nullptr,
				"EGASAbilityInputID",
				"EGASAbilityInputID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
