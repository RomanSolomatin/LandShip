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
	
private:
	ATank1* GetControlledTank() const;
	
	virtual void BeginPlay() override;

	//har frame seda zade mishe.
	virtual void Tick(float DeltaTime) override;
	//baEse Tekon khordane neshone y tank mishe pas tir be jayy ke barrel neshone gerefte barkhord mikone 
	void AimTowardCrosshair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;


	UPROPERTY(EditAnywhere)
		float CrosshairXLocation = 0.5;
		
	UPROPERTY(EditAnywhere)
		float CrosshairYLocation = 0.3333;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
};
