// Copyright Epic Games, Inc. All Rights Reserved.

#include "jenkinsTestFPSGameMode.h"
#include "jenkinsTestFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AjenkinsTestFPSGameMode::AjenkinsTestFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
