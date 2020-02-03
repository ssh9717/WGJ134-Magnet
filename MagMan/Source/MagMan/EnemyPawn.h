// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnemyPawn.generated.h"

UCLASS()
class MAGMAN_API AEnemyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();

	// Scene component
	UPROPERTY(VisibleAnywhere, Category = Collision)
	USphereComponent* Sphere;
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	USkeletalMeshComponent* Mesh;

	// Actor component
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UFloatingPawnMovement* PawnMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
