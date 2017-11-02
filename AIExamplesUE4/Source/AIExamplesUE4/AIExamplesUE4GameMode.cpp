// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AIExamplesUE4GameMode.h"
#include "AIExamplesUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AAIExamplesUE4GameMode::AAIExamplesUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
