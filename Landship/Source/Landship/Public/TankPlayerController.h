// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank1.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LANDSHIP_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank1* GetControlledTank() const;
	
	
};
