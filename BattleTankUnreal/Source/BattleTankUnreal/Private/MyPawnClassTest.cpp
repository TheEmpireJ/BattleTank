// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankUnreal.h"
#include "MyPawnClassTest.h"


// Sets default values
AMyPawnClassTest::AMyPawnClassTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawnClassTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnClassTest::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPawnClassTest::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

