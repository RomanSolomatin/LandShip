// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent) )
class LANDSHIP_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnyWhere, Category = Setup)
		float MaxDegreesPerSecond = 10; // YE addad Default
	UPROPERTY(EditAnyWhere, Category = Setup)
		float MaxElevationDegrees = 40; 
	UPROPERTY(EditAnyWhere, CAtegory = Setup)
		float MinElevationDegrees = 0; 
};
