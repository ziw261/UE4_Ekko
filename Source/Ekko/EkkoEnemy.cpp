// Fill out your copyright notice in the Description page of Project Settings.


#include "EkkoEnemy.h"

// Sets default values
AEkkoEnemy::AEkkoEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEkkoEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEkkoEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEkkoEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

