// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/PP_Goal.h"

// Sets default values
APP_Goal::APP_Goal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APP_Goal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APP_Goal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

