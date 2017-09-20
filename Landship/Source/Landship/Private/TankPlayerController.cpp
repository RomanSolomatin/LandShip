// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "Landship.h"


ATank1* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank1>(GetPawn());
}
