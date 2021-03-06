// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "public/Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:

	void BeginPlay() override;

	ATank * GetAIControllerTank() const;

	ATank* GetPlayerTank() const;
	
	
};
