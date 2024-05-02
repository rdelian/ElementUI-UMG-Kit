// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "CommonButtonBase.h"
#include "CommonTextBlock.h"
#include "ELMTCombo.generated.h"


UCLASS(Abstract, Blueprintable, ClassGroup = UI)
class UMGELMTKIT_API UELMTComboStyle : public UObject {
	GENERATED_BODY()

public:
	/**
	 * Set the combo button style to match the CommonButtonStyle
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Style)
	TSubclassOf<UCommonButtonStyle> CommonButtonStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Style)
	FComboBoxStyle Style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Style)
	FTableRowStyle ItemStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Style)
	FScrollBarStyle ScrollBarStyle;
};

UCLASS()
class UMGELMTKIT_API UELMTCombo : public UComboBoxString
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ELMT_Style, meta = (ExposeOnSpawn = true))
	TSubclassOf<UELMTComboStyle> ComboBoxStyle;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, CallInEditor)
	void Test();

	void Test_Implementation();

	virtual void SynchronizeProperties();
};
