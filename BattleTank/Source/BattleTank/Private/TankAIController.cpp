// Fill out your copyright notice in the Description page of Project Settings.

#include "public/TankAIController.h"
#include "Engine/World.h"

ATank* ATankAIController::GetAIControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	//auto PlayerControllerTank = GetWorld()->GetFirstPlayerController();
	
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto AIControlledTank = GetAIControllerTank();

	auto PlayerControlledTank = GetPlayerTank();

	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI: NO AI TANKS!!! TankPlayerController.cpp"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI: AI Has Tank %s"), *AIControlledTank->GetName());
	}

	if (!PlayerControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI: I can not see a player Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI: I see the player has %s"), *PlayerControlledTank->GetName());
	}
}



