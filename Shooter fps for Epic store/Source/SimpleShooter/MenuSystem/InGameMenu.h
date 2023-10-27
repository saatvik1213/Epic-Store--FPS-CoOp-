// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidgetReal.h"
#include "InGameMenu.generated.h"

/**
 *
 */
UCLASS()
class SIMPLESHOOTER_API UInGameMenu : public UMenuWidgetReal
{
	GENERATED_BODY()
protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
		class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* QuitButton;

	UFUNCTION()
		void CancelPressed();

	UFUNCTION()
		void QuitPressed();
};
