// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_FPCAttributeSet.h"
#include "Net/UnrealNetwork.h"


UGAS_FPCAttributeSet::UGAS_FPCAttributeSet()
{
}

void UGAS_FPCAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > &  OutLifeTimeProps) const
{
	//DOREPLIFETIME_CONDITION_NOTIFY(UGAS_FPCAttributeSet, FreezePercentage, COND_None, REPNOTIFY_OnChanged);

	Super::GetLifetimeReplicatedProps(OutLifeTimeProps);
}

void UGAS_FPCAttributeSet::OnRep_FreezePercentage(const FGameplayAttributeData & oldFreezePercentage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_FPCAttributeSet, FreezePercentage, oldFreezePercentage);
}

void UGAS_FPCAttributeSet::OnRep_ThawRate(const FGameplayAttributeData& oldThawRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_FPCAttributeSet, FreezePercentage, oldThawRate);
}
