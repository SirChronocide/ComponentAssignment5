// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ComponentAssignment5.h"
#include "ComponentAssignment5GameMode.h"
#include "ComponentAssignment5Character.h"

AComponentAssignment5GameMode::AComponentAssignment5GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our character
	DefaultPawnClass = AComponentAssignment5Character::StaticClass();	
}
