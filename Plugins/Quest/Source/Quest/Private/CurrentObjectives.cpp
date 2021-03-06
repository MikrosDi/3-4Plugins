// Fill out your copyright notice in the Description page of Project Settings.


#include "CurrentObjectives.h"
#include "Components/VerticalBox.h"
#include "ObjectiveWidget.h"
#include "QuestClass.h"


void UCurrentObjectives::SetCurrentObjectives(AQuestClass* Quest)
{
	if (ObjectivesList && ObjectiveWidgetClass)
	{
		ObjectivesList->ClearChildren();
		for (auto* Objective : Quest->GetObjectives())
		{
			auto* ObjectiveWidget = CreateWidget<UObjectiveWidget>(this, ObjectiveWidgetClass);
			ObjectiveWidget->Init(Objective);
			ObjectivesList->AddChildToVerticalBox(ObjectiveWidget);
		}
	}
}
