// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankNavMovementComponent1.generated.h"

/**
 * 
 */
UCLASS()
class LANDSHIP_API UTankNavMovementComponent1 : public UNavMovementComponent
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float ALI);
	
	
};
