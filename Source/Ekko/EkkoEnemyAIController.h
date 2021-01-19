// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EkkoEnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class EKKO_API AEkkoEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:


protected:
	virtual void BeginPlay() override;


private:
	
	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehavior;

	
};
