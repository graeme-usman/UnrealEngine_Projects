// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/PP_TopDownCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APP_TopDownCharacter::APP_TopDownCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	// Sets the camera to allow for the PlayerController to control camera movement 
	// (basically allows us to also look up and down and not just left and right for some reason!)
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->TargetArmLength = 800.f;
	SpringArm->bDoCollisionTest = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 2000.f, 0.f);

}

// Called when the game starts or when spawned
void APP_TopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APP_TopDownCharacter::Move(const FInputActionValue& Value)
{
	//UE_LOG(LogTemp, Display, TEXT("%s"), *Value.ToString())
	//UE_LOG(LogTemp, Display, TEXT("%s"), *GetActorForwardVector().ToString())

	MoveVec = Value.Get<FVector>();
	MoveX = MoveVec.X;
	MoveY = MoveVec.Y;

	FRotator FlatRot = GetControlRotation();
	FlatRot.Pitch = 0.0f;

	// apply the forward input
	AddMovementInput(FlatRot.RotateVector(FVector::ForwardVector), MoveVec.X);

	// apply the right input
	AddMovementInput(FlatRot.RotateVector(FVector::RightVector), MoveVec.Y);

}

// Called every frame
void APP_TopDownCharacter::Tick(float DeltaTime)
{
}

// Called to bind functionality to input
void APP_TopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APP_TopDownCharacter::Move);
	}
}

