// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAmingComponent.generated.h"

class UTankBarrel; 
// Daraye darayy haye barrel hast
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LANDSHIP_API UTankAmingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAmingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet);

	// TODO add SetTurrentReference 

	void AimAt(FVector HitLocation, float LaunchSpeed);

private:
	UTankBarrel* Barrel = nullptr;

	void MoveBarrelTowards(FVector AimDirection);
};
