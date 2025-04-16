// Copyright Qubic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"

#include "HericInputConfigData.generated.h"

class UInputMappingContext;
class UInputAction;
class UObject;
struct FFrame;

/**
 * FHericInputAction
 *
 *	Struct used to map a input action to a gameplay input tag.
 */
USTRUCT(BlueprintType)
struct FHericInputAction
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<const UInputAction> InputAction = nullptr;
};

/**
 * UHericInputConfigData
 *
 *	Non-mutable data asset that contains input configuration properties.
 */
UCLASS(BlueprintType, Const)
class HERICGAME_API UHericInputConfigData : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UHericInputConfigData(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<const UInputMappingContext> InputMappingContext = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Heric|Pawn")
	const UInputAction* FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound = true) const;

	UFUNCTION(BlueprintCallable, Category = "Heric|Pawn")
	const UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound = true) const;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputTag"))
	TArray<FHericInputAction> NativeInputActions;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputTag"))
	TArray<FHericInputAction> AbilityInputActions;
	
};
