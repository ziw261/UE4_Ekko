// Fill out your copyright notice in the Description page of Project Settings.


#include "EkkoEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void AEkkoEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	if(AIBehavior)
	{
		RunBehaviorTree(AIBehavior);
	}
}
