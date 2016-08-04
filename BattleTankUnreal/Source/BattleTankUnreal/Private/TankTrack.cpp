// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankUnreal.h"
#include "TankTrack.h"


void UTankTrack::SetThrottle(float Throttle)
{
	// float WorldTime = GetWorld()->GetTimeSeconds();
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s throttle: %f"), *Name, Throttle)

	// TODO clamp actual trottle so player cant make speed go too fast
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

