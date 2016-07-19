// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankUnreal.h"
#include "TankPlayerController.h"

// Get a pointer to the tank the player contorller is possesing
ATank* ATankPlayerController::GetControlledTank() const { return Cast<ATank>(GetPawn()); }

// Called every frame
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AimTowardsCrosshair();

	// UE_LOG(LogTemp, Warning, TEXT("Tick, Tock!"));
}

// Called when the game starts or when spawned
void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* ControlledTank = GetControlledTank();

	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Player controller is posessing: %s"), *(ControlledTank->GetName()));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Tank Player Controller is not controlling a tank!"));
	}
}

bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	// get player camera vector
	// line trace along vector
	HitLocation = FVector(1.0);
	return false;
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }	

	FVector HitLocation; // Out Parameter
	if (GetSightRayHitLocation(HitLocation)) // Has "side-effect", is going to line trace
	{
		UE_LOG(LogTemp, Warning, TEXT("HitLocation: %s"), *HitLocation.ToString())
			// Get world location of linetrace though crosshair
			// If it hits the landscape
				// Tell controlled tank to aim at this point
	}
}