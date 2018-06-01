// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Entity.generated.h"

UCLASS()
class AEntity : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEntity();
	float percentHealth() {
		return currHealth / maxHealth;
	};
	int getHealth() {
		return currHealth;
	};
	int getMaxHealth() {
		return maxHealth;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int currHealth;
	int maxHealth;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
