// Fill out your copyright notice in the Description page of Project Settings.


#include "MagManGameModeBase.h"
#include "MagManPawn.h"
#include "MagManPlayerController.h"
#include "ConstructorHelpers.h"

AMagManGameModeBase::AMagManGameModeBase()
{
	DefaultPawnClass = AMagManPawn::StaticClass();
	/*static ConstructorHelpers::FClassFinder<APawn> BP_Pawn(TEXT("Blueprint'/Game/MyMagManPawn.MyMagManPawn_C'"));
	if (BP_Pawn.Succeeded())
	{
		DefaultPawnClass = BP_Pawn.Class;
	}*/

	PlayerControllerClass = AMagManPlayerController::StaticClass();
}