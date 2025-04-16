// Copyright Qubic Games, Inc. All Rights Reserved.


#include "Character/HericCharacter.h"

AHericCharacter::AHericCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

}

void AHericCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHericCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHericCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

