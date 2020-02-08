// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "StoneActor.generated.h"

UCLASS()
class MAGMAN_API AStoneActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStoneActor();

	UPROPERTY(EditAnywhere)
	USphereComponent* Sphere;
	UPROPERTY()
	USkeletalMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)
	UAnimationAsset* AnimAsset;

	//DECLARE_DELEGATE(DeleteTargetDelegate)
	//DeleteTargetDelegate

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
