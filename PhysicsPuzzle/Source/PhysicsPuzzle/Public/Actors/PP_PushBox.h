// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PP_PushBox.generated.h"

//UDELEGATE()
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoxHitSignature, FVector, NormalImpulse);

//UDELEGATE()
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoxOverlapSignature);

class APP_TopDownCharacter;

// add enum to tell what kind of box it is


UCLASS()
class PHYSICSPUZZLE_API APP_PushBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APP_PushBox();

	//UPROPERTY(BlueprintAssignable)
	//FBoxHitSignature OnBoxHitDelegate;

	//UPROPERTY(BlueprintAssignable)
	//FBoxOverlapSignature OnBoxOverlapDelegate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	TObjectPtr<UStaticMeshComponent> BoxStaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TObjectPtr<UMaterialInstance> BoxMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	TObjectPtr<UBoxComponent> BoxCollision;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void MoveBox(float DeltaTime);
	void UpdateBox();
	bool CheckIfAtLocation();

	FHitResult LookAheadSweep;
	bool LookAhead_Push(FHitResult& sweep);
	bool LookAhead_OneBox(FHitResult& sweep);

	FVector StartLocation = FVector::ZeroVector;
	FVector CurrentLocation = FVector::ZeroVector;
	FVector EndLocation = FVector::ZeroVector;

	FVector PushDirection = FVector::ZeroVector;
	float PushDistance = 100.f;
	float PushSpeed = PushDistance * 5;
	float DistanceTraveled = -1.0f;
	
	bool bCanPush = true;
	bool bHitByCharacter = false;
	bool bBlocked = false;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
