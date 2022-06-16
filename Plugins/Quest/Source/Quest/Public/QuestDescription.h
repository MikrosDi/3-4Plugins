// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "QuestDescription.generated.h"

class AQuestClass;
class UObjectiveWidget;

UCLASS()
class QUEST_API UQuestDescription : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void Init(AQuestClass* Quest);
	
protected:
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* NameText;
	
	UPROPERTY(meta = (BindWidget))
	UScrollBox* ObjectivesList;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DescriptionText;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
};
	

