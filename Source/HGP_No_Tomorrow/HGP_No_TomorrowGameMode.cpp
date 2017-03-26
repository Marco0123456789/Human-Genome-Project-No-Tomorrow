// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HGP_No_Tomorrow.h"
#include "HGP_No_TomorrowGameMode.h"
#include "HGP_No_TomorrowCharacter.h"

AHGP_No_TomorrowGameMode::AHGP_No_TomorrowGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
