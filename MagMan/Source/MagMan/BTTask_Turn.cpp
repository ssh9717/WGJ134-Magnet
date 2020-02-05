// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Turn.h"
#include "MagManAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_Turn::UBTTask_Turn()
{
	NodeName = TEXT("MagnetTurn");
}

EBTNodeResult::Type UBTTask_Turn::ExecuteTask(UBehaviorTreeComponent & BTComp, uint8 * NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(BTComp, NodeMemory);

	APawn* mPawn = BTComp.GetAIOwner()->GetPawn();
	if(mPawn == nullptr) return EBTNodeResult::Failed;

	return EBTNodeResult::Type();
}
