// Fill out your copyright notice in the Description page of Project Settings.


#include "MagManAIController.h"
#include "NavigationSystem.h"
#include "ConstructorHelpers.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

using namespace ELogVerbosity;

AMagManAIController::AMagManAIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("BlackboardData'/Game/Character/IronBall/AI/EnemyBlackBoard.EnemyBlackBoard'"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
	}
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("BehaviorTree'/Game/Character/IronBall/AI/EnemyBehaviorTree.EnemyBehaviorTree'"));
	if (BTObject.Succeeded())
	{
		BTAsset = BTObject.Object;
	}
}

void AMagManAIController::OnPossess(APawn * InPawn)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *InPawn->GetName());
	Super::OnPossess(InPawn);
	if (UseBlackboard(BBAsset, Blackboard))
	{
		UE_LOG(LogTemp, Warning, TEXT("Use Blackboard"));
		Blackboard->SetValueAsVector(TEXT("Start"), FVector(.0f, -400.f, .0f ));
		Blackboard->SetValueAsVector(TEXT("Destination"), FVector(.0f, -100.0f, .0f));
		if (!RunBehaviorTree(BTAsset))
		{
			UE_LOG(LogTemp, Warning, TEXT("BT Error"));
		}
	}
}
