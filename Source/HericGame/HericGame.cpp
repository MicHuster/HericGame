// Copyright Epic Games, Inc. All Rights Reserved.

#include "HericGame.h"
#include "Modules/ModuleManager.h"

/**
 * FHericGameModule
 */
class FHericGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
	}

	virtual void ShutdownModule() override
	{
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FHericGameModule, HericGame, "HericGame");
