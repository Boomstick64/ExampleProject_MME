// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExampleProject_MMEGameMode.h"
#include "ExampleProject_MMECharacter.h"
#include "UObject/ConstructorHelpers.h"

AExampleProject_MMEGameMode::AExampleProject_MMEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
