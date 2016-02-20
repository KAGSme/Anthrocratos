// Fill out your copyright notice in the Description page of Project Settings.

#include "Anthrocratos_UE4.h"
#include "GameTileSpawner.h"


// Sets default values
AGameTileSpawner::AGameTileSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameTileSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameTileSpawner::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AGameTileSpawner::SpawnTiles()
{
	SetActorLocation(FVector(0.f, 0.f, 0.f));
}

