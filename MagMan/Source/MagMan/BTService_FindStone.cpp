// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_FindStone.h"
#include "MagManAIController.h"
#include "EnemyPawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
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

	AEnemyPawn* EPawn = Cast<AEnemyPawn>(Owner.GetAIOwner()->GetPawn());
	if (EPawn == nullptr) return;

	UWorld* World = EPawn->GetWorld();
	FVector Center = EPawn->GetActorLocation();
	float DetectRadius = 1000.0f;	
	if (World == nullptr) return;
	
	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, true);

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

	UE_LOG(LogTemp, Warning, TEXT("Loop Start"));
	for (FOverlapResult& result : OverlapResults)
	{
		UE_LOG(LogTemp, Warning, TEXT("Collision Name : %s"), *result.GetActor()->GetName());
	}
	UE_LOG(LogTemp, Warning, TEXT("Loop End"));

}
