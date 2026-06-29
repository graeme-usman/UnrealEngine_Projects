// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootballerGameMode.h"
#include "FootballerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFootballerGameMode::AFootballerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
