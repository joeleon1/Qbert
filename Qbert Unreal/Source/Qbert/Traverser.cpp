// Fill out your copyright notice in the Description page of Project Settings.

#include "Qbert.h"
#include "Traverser.h"


// Sets default values
ATraverser::ATraverser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATraverser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATraverser::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

