// Copyright Qubic Games, Inc. All Rights Reserved.


#include "Input/HericInputComponent.h"

#include "EnhancedInputSubsystems.h"
//#include "Player/HericLocalPlayer.h"
//#include "Settings/HericSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(HericInputComponent)

class UHericInputConfigData;

UHericInputComponent::UHericInputComponent(const FObjectInitializer& ObjectInitializer)
{
	
}

void UHericInputComponent::AddInputMappings(const UHericInputConfigData* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to add something from your input config if required
}

void UHericInputComponent::RemoveInputMappings(const UHericInputConfigData* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to remove input mappings that you may have added above
}

void UHericInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
