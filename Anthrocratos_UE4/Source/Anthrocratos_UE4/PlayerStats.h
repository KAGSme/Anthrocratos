// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PlayerStats.generated.h"

UENUM(BlueprintType)
enum class EPlayerNo : uint8
{
	PN_0 UMETA(DisplayName = "Player 1"),
	PN_1 UMETA(DisplayName = "Player 2"),
	PN_2 UMETA(DisplayName = "Player 3"),
	PN_3 UMETA(DisplayName = "Player 4")
};

UCLASS()
class ANTHROCRATOS_UE4_API APlayerStats : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerStats();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
