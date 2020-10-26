// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Practice/GAS_FPCAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_FPCAttributeSet() {}
// Cross Module References
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_FPCAttributeSet_NoRegister();
	GAS_PRACTICE_API UClass* Z_Construct_UClass_UGAS_FPCAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_GAS_Practice();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UGAS_FPCAttributeSet::execOnRep_ThawRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldThawRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ThawRate(Z_Param_Out_oldThawRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAS_FPCAttributeSet::execOnRep_FreezePercentage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldFreezePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FreezePercentage(Z_Param_Out_oldFreezePercentage);
		P_NATIVE_END;
	}
	void UGAS_FPCAttributeSet::StaticRegisterNativesUGAS_FPCAttributeSet()
	{
		UClass* Class = UGAS_FPCAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_FreezePercentage", &UGAS_FPCAttributeSet::execOnRep_FreezePercentage },
			{ "OnRep_ThawRate", &UGAS_FPCAttributeSet::execOnRep_ThawRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics
	{
		struct GAS_FPCAttributeSet_eventOnRep_FreezePercentage_Parms
		{
			FGameplayAttributeData oldFreezePercentage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldFreezePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_oldFreezePercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::NewProp_oldFreezePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::NewProp_oldFreezePercentage = { "oldFreezePercentage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAS_FPCAttributeSet_eventOnRep_FreezePercentage_Parms, oldFreezePercentage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::NewProp_oldFreezePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::NewProp_oldFreezePercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::NewProp_oldFreezePercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GAS_FPCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_FPCAttributeSet, nullptr, "OnRep_FreezePercentage", nullptr, nullptr, sizeof(GAS_FPCAttributeSet_eventOnRep_FreezePercentage_Parms), Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics
	{
		struct GAS_FPCAttributeSet_eventOnRep_ThawRate_Parms
		{
			FGameplayAttributeData oldThawRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldThawRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_oldThawRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::NewProp_oldThawRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::NewProp_oldThawRate = { "oldThawRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAS_FPCAttributeSet_eventOnRep_ThawRate_Parms, oldThawRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::NewProp_oldThawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::NewProp_oldThawRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::NewProp_oldThawRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GAS_FPCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_FPCAttributeSet, nullptr, "OnRep_ThawRate", nullptr, nullptr, sizeof(GAS_FPCAttributeSet_eventOnRep_ThawRate_Parms), Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAS_FPCAttributeSet_NoRegister()
	{
		return UGAS_FPCAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGAS_FPCAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThawRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThawRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreezePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreezePercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GAS_Practice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_FreezePercentage, "OnRep_FreezePercentage" }, // 3878997049
		{ &Z_Construct_UFunction_UGAS_FPCAttributeSet_OnRep_ThawRate, "OnRep_ThawRate" }, // 1089255828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GAS_FPCAttributeSet.h" },
		{ "ModuleRelativePath", "GAS_FPCAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_ThawRate_MetaData[] = {
		{ "Category", "GASAttributes | FreezeCharacteristics" },
		{ "ModuleRelativePath", "GAS_FPCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_ThawRate = { "ThawRate", "OnRep_ThawRate", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_FPCAttributeSet, ThawRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_ThawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_ThawRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_FreezePercentage_MetaData[] = {
		{ "Category", "GASAttributes | FreezeCharacteristics" },
		{ "ModuleRelativePath", "GAS_FPCAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_FreezePercentage = { "FreezePercentage", "OnRep_FreezePercentage", (EPropertyFlags)0x0010000100000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGAS_FPCAttributeSet, FreezePercentage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_FreezePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_FreezePercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_ThawRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::NewProp_FreezePercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_FPCAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::ClassParams = {
		&UGAS_FPCAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAS_FPCAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAS_FPCAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAS_FPCAttributeSet, 2517518438);
	template<> GAS_PRACTICE_API UClass* StaticClass<UGAS_FPCAttributeSet>()
	{
		return UGAS_FPCAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAS_FPCAttributeSet(Z_Construct_UClass_UGAS_FPCAttributeSet, &UGAS_FPCAttributeSet::StaticClass, TEXT("/Script/GAS_Practice"), TEXT("UGAS_FPCAttributeSet"), false, nullptr, nullptr, nullptr);

	void UGAS_FPCAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_FreezePercentage(TEXT("FreezePercentage"));
		static const FName Name_ThawRate(TEXT("ThawRate"));

		const bool bIsValid = true
			&& Name_FreezePercentage == ClassReps[(int32)ENetFields_Private::FreezePercentage].Property->GetFName()
			&& Name_ThawRate == ClassReps[(int32)ENetFields_Private::ThawRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGAS_FPCAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_FPCAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
