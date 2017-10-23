// Fill out your copyright notice in the Description page of Project Settings.
#include "TankAIController.h"
#include "Tank1.h"
#include "Landship.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetControlledTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller cant find Player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller found player tank: %s"), *(PlayerTank->GetName()));
	}

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank())
	{
		//TODO Move toward the player
		//Aim Toward The Player
		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
		//Fire IF Ready
	}
}

ATank1* ATankAIController::GetControlledTank() const
{
	return Cast<ATank1>(GetPawn());
}

ATank1 * ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!PlayerPawn){ return nullptr; }


	return Cast<ATank1>(PlayerPawn);
}
