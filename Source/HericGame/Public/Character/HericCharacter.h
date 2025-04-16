// Copyright Qubic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "HericCharacter.generated.h"

UCLASS()
class HERICGAME_API AHericCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AHericCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
	
};
