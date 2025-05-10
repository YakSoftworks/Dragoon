// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeroComponent.generated.h"

struct FInputActionValue;
class AWyrmCharacter;

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


protected:

	//Cache a Reference to our Owner Character
	UPROPERTY()
	AWyrmCharacter* OwningCharacter;


#pragma region General Input Callbacks

	//General Callbacks for Basic Movement
	//void Input_Move(const FInputActionValue& Value);
	//void Input_LookMouse(const FInputActionValue& Value);

#pragma region Attacks


	void Input_LeftAttack(const FInputActionValue& Value);
	void Input_RightAttack(const FInputActionValue& Value);


#pragma endregion

#pragma endregion

#pragma region Actor Component Functions

public:
	virtual void BeginPlay() override;

#pragma endregion



		
};
