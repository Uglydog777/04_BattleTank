// Fill out your copyright notice in the Description page of Project Settings.

#include "public/TankAIController.h"

ATank* ATankAIController::GetAIControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	
	auto AIControlledTank = GetAIControllerTank();

	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("NO AI TANKS!!! TankPlayerController.cpp"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Has Tank: %s"), *AIControlledTank->GetName());
	}
}



