// Fill out your copyright notice in the Description page of Project Settings.


#include "My_First_Character.h"

// Sets default values
AMy_First_Character::AMy_First_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMy_First_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy_First_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMy_First_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

