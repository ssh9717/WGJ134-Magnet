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

	//float OneStep = 150.0f;

	EBTNodeResult::Type Result = Super::ExecuteTask(BTComp, NodeMemory);

	UBlackboardComponent* Blackboard = BTComp.GetBlackboardComponent();
	APawn* mPawn = BTComp.GetAIOwner()->GetPawn();
	if(mPawn == nullptr) return EBTNodeResult::Failed;

	FVector DistanceToMove = Blackboard->GetValueAsVector("TargetPos") - mPawn->GetActorLocation();

	//UE_LOG(LogTemp, Warning, TEXT("DistanceToMove : %s"), *DistanceToMove.ToString());
	
	//FVector ToMove = FVector();
/*
	if (FMath::Abs(DistanceToMove.X) >= OneStep)
	{
		ToMove = FVector(FMath::Sign(DistanceToMove.X) * OneStep, 0, 0);
	}
	else
	{
		ToMove = FVector(0, FMath::Sign(DistanceToMove.Y) * OneStep, 0);
	}
	mPawn->AddMovementInput(ToMove);
*/
	//UE_LOG(LogTemp, Warning, TEXT("ToMove : %s"), *ToMove.ToString());

	return EBTNodeResult::Succeeded;
}
