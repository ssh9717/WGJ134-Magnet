// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameFramework/Controller.h"
#include "MagManAIController.generated.h"

/**
 * 
 */
UCLASS()
class MAGMAN_API AMagManAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AMagManAIController();

	UFUNCTION()
	void DeleteTarget();

	DECLARE_DELEGATE(DeleteTargetDelegate)
	DeleteTargetDelegate mDelegate;


	virtual void OnPossess(APawn* InPawn) override;

private:
	UPROPERTY()
	class UBehaviorTree* BTAsset;
	UPROPERTY()
	class UBlackboardData* BBAsset;

};
