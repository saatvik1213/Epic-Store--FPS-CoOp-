// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleShooter/KillEmAllGameMode.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ALobbyGameMode : public AKillEmAllGameMode
{
	GENERATED_BODY()
public:
	void PostLogin(APlayerController* NewPlayer) override;

	void Logout(AController* Exiting) override;
private:
	uint32 NumberOfPlayers = 0;
	void StartGame();
	FTimerHandle GameStartTimer;
};
