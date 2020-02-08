// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneActor.h"
#include "ConstructorHelpers.h"
#include "MagManAIController.h"
#include "MagManPawn.h"
#include "EnemyPawn.h"


using namespace ELogVerbosity;

// Sets default values
AStoneActor::AStoneActor()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Collision Component
	//Sphere->Collsion
	Sphere = CreateDefaultSubobject<USphereComponent>("Colider", false);
	Sphere->SetSphereRadius(25.0f);
	Sphere->SetCollisionProfileName(FName(TEXT("Stone")));
	Sphere->SetSimulatePhysics(true);
	Sphere->SetEnableGravity(false);
	Sphere->SetLinearDamping(3.0f);
	Sphere->SetConstraintMode(EDOFMode::XYPlane);
	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, FName("OnHit"));
	Sphere->OnComponentHit.Add(CollisionDelegate);
	RootComponent = Sphere;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh", false);
	Mesh->SetupAttachment(Sphere);
	Mesh->SetRelativeLocation(FVector(.0f, .0f, .0f));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Stone_Mesh(TEXT("SkeletalMesh'/Game/Character/Stone/stone.stone'"));
	if (Stone_Mesh.Succeeded())
	{
		Mesh->SetSkeletalMesh(Stone_Mesh.Object);
	}
	Mesh->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	AnimAsset = LoadObject<UAnimationAsset>(nullptr, TEXT("'/Game/Character/Stone/Animation/stone_Anim.stone_Anim'"));

}

// Called when the game starts or when spawned
void AStoneActor::BeginPlay()
{
	Super::BeginPlay();

	if (AnimAsset != nullptr)
	{
		Mesh->PlayAnimation(AnimAsset, true);
	}
}

// Called every frame
void AStoneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStoneActor::OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("ON HIT : %s"), *OtherActor->GetName());
	
	UClass* ActorClass = OtherActor->GetClass();
	
	// Push back to opposite direction
	if (ActorClass == AMagManPawn::StaticClass())
	{
		FVector PushDirection = (Cast<AMagManPawn>(OtherActor))->getVelocity();
		Sphere->AddImpulse(PushDirection * 30000.0f);
	}
	// Destroy Stone
	else if (ActorClass == AEnemyPawn::StaticClass())
	{
		AMagManAIController::DeleteTargetDelegate mDelegate;
		UE_LOG(LogTemp, Warning, TEXT("Before Execute"));
		if (mDelegate.IsBound())
		{
			UE_LOG(LogTemp, Warning, TEXT("Excuting"));
			mDelegate.Execute();
		}
		Destroy();
	}
	else
	{
	}

}

