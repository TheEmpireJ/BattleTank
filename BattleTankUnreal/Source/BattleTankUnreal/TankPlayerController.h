// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKUNREAL_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	
	virtual void Tick (float) override;
	virtual void BeginPlay() override;

private:

	// Return where the reticule is pointing on the terrain though the out perameter. True if its hitting the terrain, false if not.
	bool GetSightRayHitLocation(FVector&) const;

	// Start the tank moving the barrel so that a shot whould hit where the crosshair will intersect with the world
	void AimTowardsCrosshair();
	
};
