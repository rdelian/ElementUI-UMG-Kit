// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "ELMTProgressBar.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup = UI)
class UMGELMTKIT_API UELMTProgressBarStyle : public UObject {
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FProgressBarStyle Style;
};

UCLASS()
class UMGELMTKIT_API UELMTProgressBar : public UProgressBar
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Style, meta = (ExposeOnSpawn = true))
	TSubclassOf<UELMTProgressBarStyle> ProgressBarStyle;

	virtual void SynchronizeProperties();
};
