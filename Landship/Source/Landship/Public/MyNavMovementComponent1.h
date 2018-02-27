// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "MyNavMovementComponent1.generated.h"

/**
 * 
 */
UCLASS()
class LANDSHIP_API UMyNavMovementComponent1 : public UNavMovementComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throww);
	
	
};
