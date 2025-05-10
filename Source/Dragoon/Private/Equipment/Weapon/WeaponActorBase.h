// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponActorBase.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FWeaponActorToSpawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeaponActorBase> WeaponActorToSpawn;

	UPROPERTY(EditAnywhere)
	FName AttachToSocket;

	UPROPERTY(EditAnywhere)
	FTransform AttachTransform;

};

USTRUCT()
struct FWeaponDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TArray<FWeaponActorToSpawn> WeaponActors;

	//TODO: Their Abilities Also and more!

};

UCLASS()
class AWeaponActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponActorBase();



};
