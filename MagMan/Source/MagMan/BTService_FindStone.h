// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_FindStone.generated.h"

/**
 * 
 */
UCLASS()
class MAGMAN_API UBTService_FindStone : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_FindStone();

protected:
	virtual void TickNode(UBehaviorTreeComponent& Owner, uint8* NodeMemory, float DeltaSeconds) override;
	
};
