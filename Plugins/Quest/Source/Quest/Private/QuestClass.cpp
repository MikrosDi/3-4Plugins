// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestClass.h"

#include "AITestsCommon.h"
#include "Objective.h"
#include "QuestDialog.h"
#include "QuestListComponent.h"
#include "QuestSystemCharacter.h"


void AQuestClass::UpdateLocation()
{
	AActor * ParentActor = GetAttachParentActor();
	
	if (ParentActor)
	{
		SetActorLocation(ParentActor->GetActorLocation());
	}
}

void AQuestClass::TakeQuest(AActor * Character)
{
	for (int32 i = 0; i < Objectives.Num(); i++)
	{
		if (Objectives[i])
		{
			Objectives[i]->ActivateObjective(Character);
			Objectives[i]->bCanBeCompleted = !bKeepObjectivesOrder || i == 0;
			Objectives[i]->OnObjectiveCompleted.AddUObject(this,
			&AQuestClass::OnObjectiveCompleted);
		}
	}
	bIsTaken = true;
}

void AQuestClass::OnObjectiveCompleted(UObjective* Objective)
{
	if (bKeepObjectivesOrder)
	{
		int32 ObjectiveIndex;
		if (Objectives.Find(Objective, ObjectiveIndex) &&
		Objectives.IsValidIndex(ObjectiveIndex + 1))
		{
			Objectives[ObjectiveIndex + 1]->bCanBeCompleted = true;
		}
	}
	if (OnQuestStatusUpdated.IsBound())
	{
		OnQuestStatusUpdated.Broadcast(this);
	}
}

void AQuestClass::AddLocationObjective()
{
	Objectives.Add(NewObject<ULocationObjective>(this));
}

void AQuestClass::AddInteractObjective()
{
	Objectives.Add(NewObject<UInteractionObjective>(this));
}


AQuestClass::AQuestClass()
{
	
}

void AQuestClass::BeginPlay()
{
	Super::BeginPlay();

	AActor* ParentActor = GetAttachParentActor();
	if (ParentActor)
	{
		TakeQuest(ParentActor);
	}
}

void AQuestClass::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

bool AQuestClass::IsCompleted()
{
	bool bIsCompleted = true;
	
	for(int32 i = 0; i < Objectives.Num(); i++)
	{
		if(!Objectives[i]->bIsCompleted)
		{
			bIsCompleted = false;
		}
	}
	return bIsCompleted;
}



