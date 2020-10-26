
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAS_FPCAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 *
 */
UCLASS()
class GAS_PRACTICE_API UGAS_FPCAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UGAS_FPCAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray < FLifetimeProperty > & properties) const override;
	
	UPROPERTY(BlueprintReadWrite, Category = "GASAttributes | FreezeCharacteristics", Replicated, ReplicatedUsing = OnRep_FreezePercentage)
		FGameplayAttributeData FreezePercentage;
	ATTRIBUTE_ACCESSORS(UGAS_FPCAttributeSet, FreezePercentage);

	UFUNCTION()
		virtual void  OnRep_FreezePercentage(const FGameplayAttributeData& oldFreezePercentage);

	UPROPERTY(BluePrintReadOnly, Category = "GASAttributes | FreezeCharacteristics", Replicated, ReplicatedUsing = OnRep_ThawRate)
		FGameplayAttributeData ThawRate;
	ATTRIBUTE_ACCESSORS(UGAS_FPCAttributeSet, ThawRate);

	UFUNCTION()
		virtual void  OnRep_ThawRate(const FGameplayAttributeData& oldThawRate);



};

