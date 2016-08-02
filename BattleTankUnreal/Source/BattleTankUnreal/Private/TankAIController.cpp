// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankUnreal.h"
#include "TankAIController.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ATank* ControlledTank = Cast<ATank>(GetPawn());
	ATank* PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (PlayerTank && ControlledTank)
	{
		// TODO Move towards player

		/// Aim at the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		//fire if ready
		ControlledTank->Fire();
	}
}
