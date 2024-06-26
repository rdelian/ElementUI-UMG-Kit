// Fill out your copyright notice in the Description page of Project Settings.

#include "ELMTTextBox.h"
#include "CommonTextBlock.h"

void UELMTTextBox::SynchronizeProperties() {
	Super::SynchronizeProperties();

	if (!TextBoxStyle)
		return;

	const TObjectPtr<UELMTTextBoxStyle> StyleInstance = TextBoxStyle.GetDefaultObject();

	if (StyleInstance->CommonButtonStyle) {
		const TObjectPtr<UCommonButtonStyle> ButtonInstance = StyleInstance->CommonButtonStyle.GetDefaultObject();

		StyleInstance->Style.BackgroundImageNormal = ButtonInstance->NormalBase;
		StyleInstance->Style.BackgroundImageHovered = ButtonInstance->NormalBase;
		StyleInstance->Style.BackgroundImageFocused = ButtonInstance->NormalPressed;
		StyleInstance->Style.BackgroundImageReadOnly = ButtonInstance->Disabled;

		// Font style
		if (const TObjectPtr<UCommonTextStyle> ButtonTextStyle = ButtonInstance->GetNormalTextStyle()) {
			StyleInstance->Style.TextStyle.Font = ButtonTextStyle->Font;
			StyleInstance->Style.TextStyle.ShadowOffset = ButtonTextStyle->ShadowOffset;
			StyleInstance->Style.TextStyle.ShadowColorAndOpacity = ButtonTextStyle->ShadowColor;
		}
	}

	WidgetStyle = StyleInstance->Style;
}
