// Copyright Epic Games, Inc. All Rights Reserved.

#include "OlegShowcaseGameMode.h"
#include "OlegShowcaseHUD.h"
#include "OlegShowcaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOlegShowcaseGameMode::AOlegShowcaseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOlegShowcaseHUD::StaticClass();
}
