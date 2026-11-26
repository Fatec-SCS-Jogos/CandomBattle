// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Components/BoxComponent.h"

#include "HitboxManager.generated.h"

/**
 * 
 */
UCLASS()
class CANDOMBATTLE_API UHitboxManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	TArray<TObjectPtr<UBoxComponent>> InitializeHitboxes(AActor* Actor);
};
