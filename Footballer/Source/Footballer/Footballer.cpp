// Copyright Epic Games, Inc. All Rights Reserved.

#include "Footballer.h"
#include "Modules/ModuleManager.h"

static TAutoConsoleVariable<bool> CVarFootballerDebugDraw(
	TEXT("footballer.DebugDraw"),
	false,
	TEXT("Draws the socket location on the footballer\n"),
	ECVF_Cheat | ECVF_RenderThreadSafe
);

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, Footballer, "Footballer" );
 