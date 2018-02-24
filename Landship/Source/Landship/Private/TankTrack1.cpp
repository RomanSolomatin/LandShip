// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack1.h"




void UTankTrack1::SetThrottle(float Throttle) 
{
	//auto Time = GetWorld()->GetTimeSeconds();
	auto Name = this->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s: Throttle: %f:"), *Name, Throttle);

	auto ForceApplied = GetForwardVector() * Throttle * MaxTrackDrivingForce;
	auto ForceLocation = this->GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(this->GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}