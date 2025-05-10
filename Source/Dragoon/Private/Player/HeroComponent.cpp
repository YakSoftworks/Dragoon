// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/HeroComponent.h"

#include "Character/WyrmCharacter.h"
#include "Equipment/WyrmEquipmentComponent.h"

// Sets default values for this component's properties
UHeroComponent::UHeroComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UHeroComponent::Input_LeftAttack(const FInputActionValue& Value)
{
	if (OwningCharacter) {
		//TODO: OwningCharacter->GetEquipmentComponent()->TriggerLeftAttack();
	}
}

void UHeroComponent::Input_RightAttack(const FInputActionValue& Value)
{
	if (OwningCharacter) {
		//TODO: OwningCharacter->GetEquipmentComponent()->TriggerRightAttack();
	}
}

void UHeroComponent::BeginPlay()
{
	//Grab A Reference to our owning Character if it is A WyrmCharacter
	OwningCharacter = Cast<AWyrmCharacter>(GetOwner());

}

