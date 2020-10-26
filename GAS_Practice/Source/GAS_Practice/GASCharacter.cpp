// Fill out your copyright notice in the Description page of Project Settings.


#include "GASCharacter.h"

// Sets default values
AGASCharacter::AGASCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilityComponent = CreateDefaultSubobject<UGASAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	attributeSet = CreateDefaultSubobject<UGAS_FPCAttributeSet>("Attributes");
}

void AGASCharacter::InitializeAttributes()
{
	if (AbilityComponent && (DefaultAttributeEffects.Num() > 0))
	{
		FGameplayEffectContextHandle EffectContext = AbilityComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		for (TSubclassOf<class UGameplayEffect> & Effect : DefaultAttributeEffects)
		{
			FGameplayEffectSpecHandle specHandle = AbilityComponent->MakeOutgoingSpec(Effect, 1, EffectContext);
			if (specHandle.IsValid())
			{
				FActiveGameplayEffectHandle GEHandle = AbilityComponent->ApplyGameplayEffectSpecToSelf(*specHandle.Data.Get());
			}
		}
	}
}



void AGASCharacter::GiveDefaultAbilities()
{
	if (HasAuthority() && AbilityComponent)
	{
		for (TSubclassOf<UGAS_GameplayAbility>& startUpAbility : DefaultAbilties)
		{
			AbilityComponent->GiveAbility(FGameplayAbilitySpec(startUpAbility, 1, static_cast<int32>(startUpAbility.GetDefaultObject()->abilityInputId), this));
		}
	}
}

void AGASCharacter::PossessedBy(AController* newController)
{
	Super::PossessedBy(newController);
	AbilityComponent->InitAbilityActorInfo(this, this);

	InitializeAttributes();
	GiveDefaultAbilities();
}

void AGASCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AbilityComponent->InitAbilityActorInfo(this, this);
	InitializeAttributes();

	if (AbilityComponent && InputComponent)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		AbilityComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

// Called when the game starts or when spawned
void AGASCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilityComponent && InputComponent)
	{
		for (size_t i = 0; i < PassiveAbilities.Num(); ++i)
		{
			FGameplayAbilitySpecHandle specHandle = AbilityComponent->GiveAbility(FGameplayAbilitySpec(PassiveAbilities[i]));
			AbilityComponent->CallServerTryActivateAbility(specHandle, false, FPredictionKey());
		}
	}
}

// Called every frame
void AGASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (AbilityComponent)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		AbilityComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

class UAbilitySystemComponent* AGASCharacter::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}


