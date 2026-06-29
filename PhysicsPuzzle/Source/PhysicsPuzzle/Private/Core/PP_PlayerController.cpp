// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/PP_PlayerController.h"
#include "EnhancedInputSubsystems.h"

void APP_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (MovementContext.Get()) {
			// Player index 0 for singleplayer character
			Subsystem->AddMappingContext(MovementContext, 0);
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("ERROR: Could not find valid Input Mapping Context"));
		}
	}
}
