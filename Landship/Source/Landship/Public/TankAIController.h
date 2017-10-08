// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank1.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class LANDSHIP_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	ATank1* GetControlledTank() const;
	
	ATank1* GetPlayerTank() const;
};
