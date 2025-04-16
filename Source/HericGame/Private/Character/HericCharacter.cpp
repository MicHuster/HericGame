// Copyright Qubic Games, Inc. All Rights Reserved.


#include "Character/HericCharacter.h"

// Sets default values
AHericCharacter::AHericCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHericCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHericCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHericCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

