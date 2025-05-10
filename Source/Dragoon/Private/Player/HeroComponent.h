// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeroComponent.generated.h"


/*
	This class if responsible input and camera handling for player controlled pawns

*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UHeroComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeroComponent();

#pragma region General Input Callbacks




#pragma endregion

		
};
