// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectiveWidget.h"
#include "Objective.h"

void UObjectiveWidget::Init(UObjective* Objective)
{
	if (Objective == nullptr)
	{
		return;
	}
	
	ComplitionCheck->SetIsChecked(Objective->bIsCompleted);
	DescriptionText->SetText(Objective->Descrition);
}