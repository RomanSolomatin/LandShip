// Fill out your copyright notice in the Description page of Project Settings.

#include "TankNavMovementComponent1.h"
#include "TankTrack1.h"

void UTankNavMovementComponent1::IntendMoveForward(float ALI)
{
	LeftTrack->SetThrottle(ALI);
	RightTrack->SetThrottle(ALI);
}

void UTankNavMovementComponent1::Initialze(UTankTrack1 * LeftTrackToSet, UTankTrack1 * RightTrackToSet)
{
	if (!LeftTrackToSet || !RightTrackToSet)
	{
		return;
	}
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;
}

void UTankNavMovementComponent1::IntendTurnRight(float ALI)
{
	RightTrack->SetThrottle(ALI);
}
