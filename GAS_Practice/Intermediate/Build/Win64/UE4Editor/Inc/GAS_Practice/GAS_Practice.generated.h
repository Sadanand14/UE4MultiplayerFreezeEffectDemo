// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAS_PRACTICE_GAS_Practice_generated_h
#error "GAS_Practice.generated.h already included, missing '#pragma once' in GAS_Practice.h"
#endif
#define GAS_PRACTICE_GAS_Practice_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAS_Practice_Source_GAS_Practice_GAS_Practice_h


#define FOREACH_ENUM_EGASABILITYINPUTID(op) \
	op(EGASAbilityInputID::None) \
	op(EGASAbilityInputID::Confirm) \
	op(EGASAbilityInputID::Cancel) \
	op(EGASAbilityInputID::Fire) \
	op(EGASAbilityInputID::Ultimate) 

enum class EGASAbilityInputID : uint8;
template<> GAS_PRACTICE_API UEnum* StaticEnum<EGASAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
