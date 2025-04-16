// Copyright Qubic Games, Inc. All Rights Reserved.

#pragma once

#include "Logging/LogMacros.h"

class UObject;

HERICGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogHeric, Log, All);
HERICGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogHericExperience, Log, All);
HERICGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogHericAbilitySystem, Log, All);
HERICGAME_API DECLARE_LOG_CATEGORY_EXTERN(LogHericTeams, Log, All);

HERICGAME_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
