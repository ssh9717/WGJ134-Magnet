// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"
#include "ConstructorHelpers.h"
#include "MagManAIController.h"
#include "Components/InputComponent.h"

using namespace ELogVerbosity;

// Sets default values
AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Collision Component
	Sphere = CreateAbstractDefaultSubobject<USphereComponent>("Colider", false);
	Sphere->SetSphereRadius(25.0f);
	Sphere->SetCollisionProfileName(FName(TEXT("BlockAllDynamic")));
	RootComponent = Sphere;
	// Mesh Component
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh", false);
	Mesh->SetupAttachment(Sphere);
	Mesh->SetRelativeLocation(FVector(.0f, .0f, .0f));
	Mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Magnet_Mesh(TEXT("SkeletalMesh'/Game/Character/Magnets/magnet.magnet'"));
	if (Magnet_Mesh.Succeeded())
	{
		Mesh->SetSkeletalMesh(Magnet_Mesh.Object);
	}
	static ConstructorHelpers::FClassFinder<UAnimInstance> MagnetAnimBP(TEXT("AnimBlueprint'/Game/Character/Magnets/Animation/MagnetBlueprint.MagnetBlueprint_C'"));
	if (MagnetAnimBP.Succeeded())
	{
		Mesh->SetAnimInstanceClass(MagnetAnimBP.Class);
	}
	// Movement Component
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement", false);
	PawnMovement->MaxSpeed = 150.0f;
	PawnMovement->Deceleration = 32000.f;
	PawnMovement->Acceleration = 8000.f;
	PawnMovement->TurningBoost = 32.f;

	AIControllerClass = AMagManAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorRotation(FQuat(1.0f, 0, 0, 0.0f), ETeleportType::None);
	AddMovementInput(DirectionToMove);
}

// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

