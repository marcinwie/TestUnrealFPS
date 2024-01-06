// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestUnrealFPSGameMode.h"
#include "TestUnrealFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestUnrealFPSGameMode::ATestUnrealFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
