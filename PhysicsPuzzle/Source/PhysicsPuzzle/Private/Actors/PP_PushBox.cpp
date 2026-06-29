// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/PP_PushBox.h"
#include "Core/PP_TopDownCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
APP_PushBox::APP_PushBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BoxStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box Mesh"));
	RootComponent = BoxStaticMesh;
	BoxStaticMesh->SetSimulatePhysics(false);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetupAttachment(GetRootComponent());
	BoxCollision->SetSimulatePhysics(false);

	LookAheadSweep = FHitResult(ENoInit::NoInit);
}

// Called when the game starts or when spawned
void APP_PushBox::BeginPlay()
{
	Super::BeginPlay();

	BoxStaticMesh->OnComponentHit.AddDynamic(this, &APP_PushBox::OnHit);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APP_PushBox::BeginOverlap);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &APP_PushBox::EndOverlap);

	StartLocation = GetActorLocation();
	CurrentLocation = StartLocation;

}

void APP_PushBox::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{	// OnHit() is called when anything makes contact with the Box
	// This could be either the player character, another box, or something else
	
	if (OtherActor)	{ // making sure whatever made contact with us is valid
		// replace the cast with interface...
		// Box = pushable
		// Character = pusher
		if ((Cast<APP_TopDownCharacter>(OtherActor)) && !bHitByCharacter) {
		// Checking to see if the actor hitting the box (this) is a player character, and we haven't already hit the box 
			PushDirection = Hit.ImpactNormal;
			EndLocation = CurrentLocation + (PushDirection * PushDistance);
			bHitByCharacter = true;
		}		
		if (LookAhead_Push(LookAheadSweep)) {
		// Either the thing hitting us is not the player, or we have already hit the box. We really only care if the thing
		// is not the player character and if LookAhead returns true, then that means there is a box in the way and we shouldn't move.
			DrawDebugBox(GetWorld(), (GetActorLocation() + (PushDirection * PushDistance)), BoxCollision->GetUnscaledBoxExtent(), GetActorQuat(), FColor::Red, false, 3.0f);

			bCanPush = false;
		}
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Cannot find valid hit actor"))
	}
}

void APP_PushBox::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && Cast<APP_PushBox>(OtherActor)) {
		UE_LOG(LogTemp, Warning, TEXT("Overlapping Actor is: %s"), *OtherComp->GetName());
		FHitResult OverlapSweep = SweepResult;
		LookAhead_OneBox(OverlapSweep);
	}
}

void APP_PushBox::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void APP_PushBox::MoveBox(float DeltaTime)
{
	FHitResult BoxSweep; 

	if (CheckIfAtLocation()) {
		UpdateBox();
	}
	else {
		BoxStaticMesh->AddLocalOffset(PushDirection * (DeltaTime * PushSpeed));
	}
}

bool APP_PushBox::LookAhead_Push(FHitResult& sweep)
{	
	FCollisionShape BoxCollCheck = FCollisionShape::MakeBox(BoxCollision->GetUnscaledBoxExtent() / 2.0);
	bool ifHit = false;
	bool tmp = GetWorld()->SweepSingleByChannel(
		LookAheadSweep,
		GetActorLocation(),
		(GetActorLocation() + (PushDirection * PushDistance)),
		GetActorQuat(),
		ECC_WorldDynamic,
		BoxCollCheck
	);

	if (ifHit && Cast<APP_PushBox>(LookAheadSweep.GetActor())) {
		ifHit = true;
	}

	return ifHit;
}

bool APP_PushBox::LookAhead_OneBox(FHitResult& sweep)
{
	UE_LOG(LogTemp, Display, TEXT("IN LOOKAHEAD_ONEBOX()"))

	return false;
}

bool APP_PushBox::CheckIfAtLocation()
{
	bool bAtDestination = false;
	FVector CheckPos = GetActorLocation();

	CurrentLocation = GetActorLocation();
	DistanceTraveled = FVector::Distance(StartLocation, CurrentLocation);

	if (CurrentLocation != EndLocation) { // Possible that we go over the destination, so we have to check the distance traveled also
		if (DistanceTraveled >= PushDistance) {
			SetActorLocation(EndLocation);
			bAtDestination = true;
		}
	}
	else { // means that we hit the Vector on the dot
		bAtDestination = true;
	}
		
	return bAtDestination;
}

void APP_PushBox::UpdateBox()
{
	bHitByCharacter = false;
	StartLocation = GetActorLocation();
	CurrentLocation = StartLocation;

	PushDirection = FVector::ZeroVector;
	EndLocation = FVector::ZeroVector;
}

// Called every frame
void APP_PushBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bHitByCharacter && bCanPush)
	{
		MoveBox(DeltaTime);
	}
}