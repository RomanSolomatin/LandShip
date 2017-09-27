// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "Landship.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possesing: %s"), *(ControlledTank->GetName()));
	}

}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardCrosshair();
	//tick dar har frame kar mikonad

}

void ATankPlayerController::AimTowardCrosshair()
{
	if ( !GetControlledTank() ){ return; }

	FVector HitLocation;//out parameter
	if (GetSightRayHitLocation( HitLocation ))//has "side-effect", is going to line trace
	{
		//UE_LOG(LogTemp, Warning, TEXT("Look Direction: %s"), *HitLocation.ToString())
		
		 
			//TODO be controlled tank begoo dar on noghte neshone begire
	}

}
//Dar edame bayad: Get world location az line trace dakhele neshone gerefte she(cross hair), true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	// find the crosshair position 
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	

	//"De-project" the screen position of the crosshair to a world direction 

	FVector CameraWorldLocation;
	FVector WorldDirection;
	if (DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, WorldDirection))
	{
		UE_LOG(LogTemp, Warning, TEXT("Look Direction: %s"), *WorldDirection.ToString());
	} 
	








	// line trace (be manie donbal kardane khat) along that look diresction, and see what hit (up to max range)
	return true;
}



ATank1* ATankPlayerController::GetControlledTank() const
{
	
	return Cast<ATank1>(GetPawn());
}
