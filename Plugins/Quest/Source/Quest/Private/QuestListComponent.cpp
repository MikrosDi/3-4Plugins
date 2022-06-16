// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestListComponent.h"

#include "Blueprint/UserWidget.h"
#include "CurrentObjectives.h"
#include "QuestClass.h"


// Called when the game starts
void UQuestListComponent::BeginPlay()
{
	Super::BeginPlay();

	if (CurrentObjectivesWidgetClass)
	{
		UCurrentObjectives* ObjectivesWidget = CreateWidget<UCurrentObjectives>(GetWorld(), CurrentObjectivesWidgetClass);
		OnActiveQuestChanged.AddUObject(ObjectivesWidget,&UCurrentObjectives::SetCurrentObjectives);
		ObjectivesWidget->AddToViewport();
	}
}

void UQuestListComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UQuestListComponent::UQuestListComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UQuestListComponent::AddQuest(AQuestClass* Quest)
{
	if (Quest==nullptr)
	{
		return;
	}

	if(ActiveQuest == nullptr || ActiveQuest->IsCompleted())
	{
		ActiveQuest = Quest;
		OnActiveQuestChanged.Broadcast(ActiveQuest);
	}
	
		AcceptedQuests.Add(Quest);
		Quest->TakeQuest(GetOwner());
		Quest->OnQuestStatusUpdated.AddLambda([this](AQuestClass* ChangedQuest)
		{
		  if (ActiveQuest == ChangedQuest)
		  {
		  	OnActiveQuestChanged.Broadcast(ChangedQuest);
		  }
        });
}

void UQuestListComponent::SetActiveQuest(AQuestClass* Quest)
{
	if (AcceptedQuests.Contains(Quest))
	{
		ActiveQuest = Quest;
		OnActiveQuestChanged.Broadcast(Quest);
	}
}


	


