// Fill out your copyright notice in the Description page of Project Settings.


#include "target.h"

// Sets default values
Atarget::Atarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

