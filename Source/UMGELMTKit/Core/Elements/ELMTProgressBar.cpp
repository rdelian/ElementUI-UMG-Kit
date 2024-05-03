// Fill out your copyright notice in the Description page of Project Settings.


#include "ELMTProgressBar.h"

void UELMTProgressBar::SynchronizeProperties() {
	Super::SynchronizeProperties();

	if (ProgressBarStyle) {
		const TObjectPtr<UELMTProgressBarStyle> StyleInstance = ProgressBarStyle.GetDefaultObject();

		SetWidgetStyle(StyleInstance->Style);

		SetFillColorAndOpacity(StyleInstance->Style.FillImage.TintColor.GetSpecifiedColor());
	}
}
