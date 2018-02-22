// Fill out your copyright notice in the Description page of Project Settings.
#include "TankAIController.h"
#include "Tank1.h"
#include "Landship.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = Cast<ATank1>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank1>(GetPawn()); // AITank = controlled Tank
	if (PlayerTank)
	{
		//TODO Move toward the player
		//Aim Toward The Player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire(); // TODO Limit the Fire Rate
	}
}
