// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PP_PlayerController.generated.h"

/**
 * 
 */

class UInputMappingContext;

UCLASS()
class PHYSICSPUZZLE_API APP_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> MovementContext;
};
