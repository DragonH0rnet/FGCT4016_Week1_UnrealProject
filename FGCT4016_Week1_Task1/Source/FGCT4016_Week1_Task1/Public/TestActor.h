// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class FGCT4016_WEEK1_TASK1_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TestActor) float speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TestActor) FString message;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = TestActor) void SayHi();
};
