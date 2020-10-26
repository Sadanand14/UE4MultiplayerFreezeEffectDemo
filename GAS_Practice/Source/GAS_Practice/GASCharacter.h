// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GAS_Practice.h"
#include "GAS_FPCAttributeSet.h"
#include "GASAbilitySystemComponent.h"
#include "GAS_GameplayAbility.h"
#include "AbilitySystemInterface.h"
#include <GameplayEffectTypes.h>
#include "GASCharacter.generated.h"

UCLASS()
class GAS_PRACTICE_API AGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	AGASCharacter();

	UPROPERTY(BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	class UGASAbilitySystemComponent* AbilityComponent;
	
	UPROPERTY(BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	class UGAS_FPCAttributeSet* attributeSet;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<class UGameplayEffect>> DefaultAttributeEffects;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UGAS_GameplayAbility>> DefaultAbilties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Passives")
	TArray<TSubclassOf<class UGAS_GameplayAbility>> PassiveAbilities;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void InitializeAttributes();

	virtual void GiveDefaultAbilities();

	virtual void PossessedBy(AController* newController) override;
	virtual void OnRep_PlayerState() override;
};
