// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "TankAmingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank1.generated.h"
class UTankBarrel;
class UTankAmingComponent;
class AProjectile;
class UTankNavMovementComponent1;
//{
//public:
//protected:
//private:
//};
UCLASS()
class LANDSHIP_API ATank1 : public APawn
{
	GENERATED_BODY()
public:
		void AimAt(FVector HitLocation);
		
		UFUNCTION(BlueprintCallable, Category = Setup)
		void SetBarrelReference(UTankBarrel* BarrelToSet);
		UFUNCTION(BlueprintCallable, Category = Setup)
		void SetTurretReference(UTankTurret* TurretToSet);
		UFUNCTION(BlueprintCallable)
		void Fire();

	// Sets default values for this pawn's properties
	ATank1();

protected:
	UTankAmingComponent* TankAimingComponent = nullptr;
	UPROPERTY()
	UTankNavMovementComponent1* ALLI = nullptr;
    

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere, Category = Firing)
		float LaunchSpeed = 4000;
	UPROPERTY(EditAnywhere, Category = Setup)
		/*UClass* projectileBlueprint;*/
		TSubclassOf<AProjectile> ProjectileBlueprint;

	UTankBarrel* Barrel = nullptr;

	float ReloadTimeInSeconds = 3.0f;
	double LastFireTime = 0;
};
