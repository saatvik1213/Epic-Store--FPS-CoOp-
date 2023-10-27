// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"

#include "MenuWidgetReal.generated.h"

/**
 *
 */
UCLASS()
class  SIMPLESHOOTER_API UMenuWidgetReal : public UUserWidget
{
	GENERATED_BODY()

public:
	void Setup();
	void Teardown();

	void SetMenuInterface(IMenuInterface* MenuInterface);

protected:
	IMenuInterface* MenuInterface;
};
