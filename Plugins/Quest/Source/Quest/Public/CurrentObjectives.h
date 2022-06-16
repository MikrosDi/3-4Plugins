// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "CurrentObjectives.generated.h"

class AQuestClass;
class UObjectiveWidget;

UCLASS()
class QUEST_API UCurrentObjectives : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION()
	void SetCurrentObjectives(AQuestClass* Quest);
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
	
	UPROPERTY(meta = (BindWidgetOptional))
	UVerticalBox* ObjectivesList;
};
