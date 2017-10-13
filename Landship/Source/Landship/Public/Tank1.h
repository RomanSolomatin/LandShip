// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankAmingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank1.generated.h"

UCLASS()
class LANDSHIP_API ATank1 : public APawn
{
	GENERATED_BODY()
public:
		void AimAt(FVector HitLocation);
		
		UFUNCTION(BlueprintCallable, Category = Setup)
		void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	// Sets default values for this pawn's properties
	ATank1();

protected:
	UTankAmingComponent* TankAimingComponent = nullptr;
    

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere, Category = Firing)
		float LaunchSpeed = 100000; // Sensible Starting Value of 1000 m/s
};
