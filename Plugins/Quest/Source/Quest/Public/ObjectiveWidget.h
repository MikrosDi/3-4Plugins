// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/CheckBox.h"
#include "Components/TextBlock.h"
#include "ObjectiveWidget.generated.h"

class UObjective;


UCLASS()
class QUEST_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void Init(UObjective* Objective);

protected:
	
	UPROPERTY(meta = (BindWidget))
	UCheckBox* ComplitionCheck;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DescriptionText;
	
};
