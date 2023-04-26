// Copyright Epic Games, Inc. All Rights Reserved.

#include "classoomGameMode.h"
#include "classoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AclassoomGameMode::AclassoomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
