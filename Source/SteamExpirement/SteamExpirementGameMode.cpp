// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamExpirementGameMode.h"
#include "SteamExpirementCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamExpirementGameMode::ASteamExpirementGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
