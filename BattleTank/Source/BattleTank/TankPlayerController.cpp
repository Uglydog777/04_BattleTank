// Fill out your copyright notice in the Description page of Project Settings.

//#include "BattleTank.h"
#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControllerTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("NO TANK!!! TankPlayerController.cpp"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("You have Tank: %s"), *ControlledTank->GetName());
	}
}
