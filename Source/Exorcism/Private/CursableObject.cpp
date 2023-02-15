// Fill out your copyright notice in the Description page of Project Settings.


#include "CursableObject.h"

// Sets default values
ACursableObject::ACursableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACursableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACursableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

