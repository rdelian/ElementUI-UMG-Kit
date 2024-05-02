// Fill out your copyright notice in the Description page of Project Settings.


#include "ELMTCombo.h"

void UELMTCombo::Test_Implementation() {
	//Super::RebuildWidget();
	MyComboBox->InvalidateStyle();
	UE_LOG(LogTemp, Warning, TEXT("Test_Implementation"));
}

void UELMTCombo::SynchronizeProperties() {
	Super::SynchronizeProperties();

	if (!ComboBoxStyle)
		return;

	TObjectPtr<UELMTComboStyle> StyleInstance = ComboBoxStyle.GetDefaultObject();
	FComboBoxStyle EditedStyle = StyleInstance->Style;

	if (StyleInstance->CommonButtonStyle) {
		TObjectPtr<UCommonButtonStyle> ButtonInstance = StyleInstance->CommonButtonStyle.GetDefaultObject();

		EditedStyle.ComboButtonStyle.ButtonStyle.SetNormal(ButtonInstance->NormalBase);
		EditedStyle.ComboButtonStyle.ButtonStyle.SetPressed(ButtonInstance->NormalPressed);
		EditedStyle.ComboButtonStyle.ButtonStyle.SetHovered(ButtonInstance->NormalHovered);
		EditedStyle.ComboButtonStyle.ButtonStyle.SetDisabled(ButtonInstance->Disabled);

		if (ButtonInstance->GetNormalTextStyle()) {
			Font = ButtonInstance->GetNormalTextStyle()->Font;
			ForegroundColor = ButtonInstance->GetNormalTextStyle()->Color;
		}
	}

	SetWidgetStyle(EditedStyle);
	SetItemStyle(StyleInstance->ItemStyle);
	ScrollBarStyle = StyleInstance->ScrollBarStyle;
}
