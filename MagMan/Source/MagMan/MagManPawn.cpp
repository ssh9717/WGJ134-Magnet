// Fill out your copyright notice in the Description page of Project Settings.


#include "MagManPawn.h"
#include "ConstructorHelpers.h"
#include "Components/InputComponent.h"

//using namespace ELogVerbosity;

// Sets default values
AMagManPawn::AMagManPawn()
{
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
	Mesh->SetRelativeScale3D(FVector(10.f, 10.f, 10.f));
	Mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> IronBall_Mesh(TEXT("SkeletalMesh'/Game/Character/IronBall/IronBall.IronBall'"));
	if (IronBall_Mesh.Succeeded())
	{
		Mesh->SetSkeletalMesh(IronBall_Mesh.Object);
	}
	static ConstructorHelpers::FClassFinder<UAnimInstance> IronBallAnimBP(TEXT("AnimBlueprint'/Game/Character/IronBall/Animation/IronBallAnimBlueprint.IronBallAnimBlueprint_C'"));
	if (IronBallAnimBP.Succeeded())
	{
		Mesh->SetAnimInstanceClass(IronBallAnimBP.Class);
	}
	// Camera Component
	Cam = CreateDefaultSubobject<UCameraComponent>("Camera", false);
	Cam->SetupAttachment(Sphere);
	Cam->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 1000.f), FRotator(-88.0f, .0f, .0f));
	Cam->SetAbsolute(true, true, true);
	// Movement Component
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement", false);
	PawnMovement->Deceleration = 32000.f;
	PawnMovement->Acceleration = 8000.f;
	PawnMovement->TurningBoost = 32.f;

	

	Velocity = FVector(0, 0, 0);
}

// Called when the game starts or when spawned
void AMagManPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagManPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddMovementInput(Velocity);
	
}

void AMagManPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Up", this, &AMagManPawn::GoUp);
	PlayerInputComponent->BindAxis("Right", this, &AMagManPawn::GoRight);
}

void AMagManPawn::GoUp(float AxisValue)
{
	
	if (FMath::Square(AxisValue) > 0)
	{
		Velocity = FVector(SpeedScale * AxisValue, 0, 0);
	}
		
	//UE_LOG(LogTemp, Warning, TEXT("Pawn Velocity\t%s"),*PawnMovement->Velocity.ToString())
}

void AMagManPawn::GoRight(float AxisValue)
{
	if (FMath::Square(AxisValue) > 0)
	{
		Velocity = FVector(0, SpeedScale * AxisValue, 0);
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Pawn Velocity\t%s"), *PawnMovement->Velocity.ToString())
}


