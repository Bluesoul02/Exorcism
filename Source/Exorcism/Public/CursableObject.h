// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CursableObject.generated.h"

UCLASS()
class EXORCISM_API ACursableObject : public AActor
{
	GENERATED_BODY()

	bool IsCursed;
	
public:	
	// Sets default values for this actor's properties
	ACursableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
