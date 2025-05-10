// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WyrmCharacter.generated.h"

class UWyrmAbilitySystemComponent;
class UWyrmEquipmentComponent;

UCLASS()
class AWyrmCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWyrmCharacter();

#pragma region Unreal Functions
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion


#pragma region Ability System
protected:

	UPROPERTY(EditAnywhere, Category="Components")
	TObjectPtr<UWyrmAbilitySystemComponent> AbilitySystemComponent;

public:
	FORCEINLINE UWyrmAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }


#pragma endregion

#pragma region Equipment
protected:

	UPROPERTY(EditAnywhere, Category="Components")
	TObjectPtr<UWyrmEquipmentComponent> EquipmentComponent;

public:

	FORCEINLINE UWyrmEquipmentComponent* GetEquipmentComponent() const { return EquipmentComponent; }

#pragma endregion


};
