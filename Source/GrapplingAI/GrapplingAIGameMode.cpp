// Copyright Epic Games, Inc. All Rights Reserved.

#include "GrapplingAIGameMode.h"
#include "GrapplingAIHUD.h"
#include "GrapplingAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrapplingAIGameMode::AGrapplingAIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGrapplingAIHUD::StaticClass();
}
