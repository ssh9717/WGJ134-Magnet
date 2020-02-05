// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MagManPawn.generated.h"

UCLASS()
class MAGMAN_API AMagManPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMagManPawn();

	// Scene component
	UPROPERTY(VisibleAnywhere, Category = Collision)
	USphereComponent* Sphere;
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Cam;
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	USkeletalMeshComponent* Mesh;

	// Actor component
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UFloatingPawnMovement* PawnMovement;

private:
	float SpeedScale = .5f;
	FVector Velocity;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void GoUp(float AxisValue);
	void GoRight(float AxisValue);
	const FVector getVelocity() const;
};
