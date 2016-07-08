// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankUnreal.h"
#include "TankPlayerController.h"

// Get a pointer to the tank the player contorller is possesing
ATank* ATankPlayerController::GetControlledTank() const { return Cast<ATank>(GetPawn()); }


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