// Fill out your copyright notice in the Description page of Project Settings.


#include "ELMTSlider.h"


void UELMTSlider::SynchronizeProperties() {
	Super::SynchronizeProperties();

	if (SliderStyle) {
		SetWidgetStyle(SliderStyle.GetDefaultObject()->Style);
	}
}
