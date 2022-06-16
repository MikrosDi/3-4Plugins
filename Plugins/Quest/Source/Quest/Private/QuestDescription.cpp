// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDescription.h"
#include "ObjectiveWidget.h"
#include "QuestClass.h"

void UQuestDescription::Init(AQuestClass* Quest)
{
	if (Quest == nullptr)
	{
		return;
	}
	   NameText->SetText(Quest->Name);
	   DescriptionText->SetText(Quest->Description);
	
		if (ObjectiveWidgetClass)
		{
			ObjectivesList->ClearChildren();
			for (auto* Objective : Quest->GetObjectives())
			{
				auto* ObjectiveWidget = CreateWidget<UObjectiveWidget>(this, ObjectiveWidgetClass);
				ObjectiveWidget->Init(Objective);
				ObjectivesList->AddChild(ObjectiveWidget);
			}
		}
	
}

