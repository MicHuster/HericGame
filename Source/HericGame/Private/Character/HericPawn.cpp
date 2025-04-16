// Copyright Qubic Games, Inc. All Rights Reserved.


#include "Character/HericPawn.h"

// Sets default values
AHericPawn::AHericPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHericPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHericPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHericPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

