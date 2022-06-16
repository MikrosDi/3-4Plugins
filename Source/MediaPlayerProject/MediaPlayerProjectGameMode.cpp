// Copyright Epic Games, Inc. All Rights Reserved.

#include "MediaPlayerProjectGameMode.h"
#include "MediaPlayerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMediaPlayerProjectGameMode::AMediaPlayerProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
