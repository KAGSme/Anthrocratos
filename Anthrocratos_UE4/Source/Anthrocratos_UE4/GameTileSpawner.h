// Testing out converting blueprint to C++ code

#pragma once

#include "GameFramework/Actor.h"
#include "GameTileSpawner.generated.h"

UCLASS()
class ANTHROCRATOS_UE4_API AGameTileSpawner : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere)
	int32 MaxRows = 5;
	UPROPERTY(EditAnywhere)
	int32 MaxColumns = 5;
	UPROPERTY(EditAnywhere)
	int32 MaxSandBiomes = 5;

	// Sets default values for this actor's properties
	AGameTileSpawner();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void SpawnTiles();

private:
	int columnCounter = 0;
	int rowCounter = 0;
	float hexBounds;
	FVector CurrentSpawnPos;
	float xOffset;
	float yOffset;
};
