// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_FindStone.h"
#include "MagManAIController.h"
#include "EnemyPawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "StoneActor.h"
#include "DrawDebugHelpers.h"

using namespace ELogVerbosity;

UBTService_FindStone::UBTService_FindStone()
{
	NodeName = TEXT("FindStone");
	Interval = 0.2f;
}

void UBTService_FindStone::TickNode(UBehaviorTreeComponent & Owner, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(Owner, NodeMemory, DeltaSeconds);

	//UE_LOG(LogTemp, Warning, TEXT("Check Entry"));
	if (Owner.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject("TargetActor") != nullptr)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Not Nullptr"));
		return;
	}
	AEnemyPawn* EPawn = Cast<AEnemyPawn>(Owner.GetAIOwner()->GetPawn());
	if (EPawn == nullptr) return;

	UWorld* World = EPawn->GetWorld();
	FVector Center = EPawn->GetActorLocation();
	float DetectRadius = 1000.0f;	
	if (World == nullptr) return;
	
	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f, '\000', 2.0f);

	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, EPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);

	FVector ActorPos = EPawn->GetActorLocation();
	FVector TargetLoc = FVector();
	AActor* ClosestStone = nullptr;
	float CloseDistance = INFINITY;
	// Find Closest Stone
	for (FOverlapResult& result : OverlapResults)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Collision Name : %s"), *result.GetActor()->GetName());
		TargetLoc = result.GetActor()->GetActorLocation();
		float DistanceBetween = (TargetLoc - ActorPos).SizeSquared();
		if (DistanceBetween < CloseDistance)
		{
			CloseDistance = DistanceBetween;
			ClosestStone = result.GetActor();
		}
	}
	//UE_LOG(LogTemp, Warning, TEXT("Closest Stone is : %s"), *ClosestStone->GetName());

	DrawDebugSphere(World, TargetLoc, 30.f, 16, FColor::Blue, false, 0.2f, '\000', 5.0f);
	Owner.GetAIOwner()->GetBlackboardComponent()->SetValueAsObject("TargetActor", ClosestStone);
	Owner.GetAIOwner()->GetBlackboardComponent()->SetValueAsVector("TargetPos", TargetLoc);

}
