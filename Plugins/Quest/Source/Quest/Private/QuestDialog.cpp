// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDialog.h"
#include "QuestClass.h"
#include "QuestDescription.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

void UQuestDialog::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (AcceptButton)
	{
		AcceptButton->OnReleased.AddDynamic(this, &ThisClass::OnAccepted);
	}
	
	if (RejectButton)
	{
		RejectButton->OnReleased.AddDynamic(this, &ThisClass::OnRejected);
	}

	auto* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(PC, this);
	PC->SetShowMouseCursor(true);
}

void UQuestDialog::Init(AQuestClass* Quest)
{
	if (Description)
	{
		Description->Init(Quest);
	}
}

void UQuestDialog::OnAccepted()
{
	HideDialog();
	OnQuestAccepted.ExecuteIfBound();
}

void UQuestDialog::OnRejected()
{
	HideDialog();
}

void UQuestDialog::HideDialog()
{
	RemoveFromViewport();
	
	auto* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(PC);
	PC->SetShowMouseCursor(false);

	RemoveFromViewport();
	
	OnDialogExit.ExecuteIfBound();
}
