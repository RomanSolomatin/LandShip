// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankNavMovementComponent1.generated.h"
class UTankTrack1;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LANDSHIP_API UTankNavMovementComponent1 : public UNavMovementComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float ALI);
	
	UFUNCTION(BlueprintCallable, Category = Input)
	void Initialze(UTankTrack1* LeftTrackToSet, UTankTrack1* RightTrackToSet);
	
private:
	UTankTrack1* LeftTrack = nullptr;
	UTankTrack1* RightTrack = nullptr;

};
