// Copyright Qubic Games, Inc. All Rights Reserved.


#include "Input/HericInputConfigData.h"

#include "HericLogChannels.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(HericInputConfigData)

UHericInputConfigData::UHericInputConfigData(const FObjectInitializer& ObjectInitializer)
{
	
}

const UInputAction* UHericInputConfigData::FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FHericInputAction& Action : NativeInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogHeric, Error, TEXT("Can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
	
}

const UInputAction* UHericInputConfigData::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FHericInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && (Action.InputTag == InputTag))
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogHeric, Error, TEXT("Can't find AbilityInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
	
}
