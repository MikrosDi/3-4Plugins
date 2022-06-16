// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystemCharacter.h"

#include "AITestsCommon.h"
#include "QuestClass.h"
#include "QuestListComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AQuestSystemCharacter::AQuestSystemCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AQuestSystemCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQuestSystemCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AQuestSystemCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AQuestSystemCharacter::Interact_Implementation(AActor* InteractInstigator)
{
	if (InteractInstigator == nullptr)
	{
		return;
	}

	UQuestListComponent* QuestList = Cast<UQuestListComponent>(InteractInstigator->GetComponentByClass(UQuestListComponent::StaticClass()));
	if(QuestList == nullptr)
	{
		return;
	}
	TArray<AActor*> AttachedActors;
	GetAttachedActors(AttachedActors);
	
	for (auto* Actor : AttachedActors)
	{
		AQuestClass* Quest = Cast<AQuestClass>(Actor);
		if (Quest == nullptr) continue;
		if(Quest->bIsTaken || (Quest->PreviousQuest && !Quest->PreviousQuest->IsCompleted()))
		{
			continue;		
		}
		if(QuestDialogClass)
		{
			UQuestDialog* QuestDialog = CreateWidget<UQuestDialog>(GetWorld(), QuestDialogClass);
			QuestDialog->Init(Quest);
			
			QuestDialog->OnQuestAccepted.BindUObject(QuestList, &UQuestListComponent::AddQuest,Quest);
			QuestDialog->OnDialogExit.BindLambda([this, InteractInstigator]()
			{
				NotifyInteractionFinished(this, InteractInstigator);
			});
			
			QuestDialog->AddToViewport();
			return;
		}
		
	}
	NotifyInteractionFinished(this, InteractInstigator);
}
