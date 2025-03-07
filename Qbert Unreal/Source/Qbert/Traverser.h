// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Traverser.generated.h"

UCLASS()
class QBERT_API ATraverser : public AActor
{
	GENERATED_BODY()

private:

public:	
	// Sets default values for this actor's properties
	ATraverser();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
