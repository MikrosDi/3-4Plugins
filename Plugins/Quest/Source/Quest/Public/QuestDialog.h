// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "QuestDialog.generated.h"


class AQuestClass;
class UQuestDescription;


UCLASS()
class QUEST_API UQuestDialog : public UUserWidget
{
	GENERATED_BODY()

public:
	
	virtual void NativeConstruct() override;
	
	virtual void Init(AQuestClass* Quest);
	
	FSimpleDelegate OnQuestAccepted;
	
	FSimpleDelegate OnDialogExit;

protected:
	
	UPROPERTY(meta = (BindWidget))
	UQuestDescription* Description;

	UPROPERTY(meta = (BindWidget))
	UButton* AcceptButton;
	
	UPROPERTY(meta = (BindWidget))
	UButton* RejectButton;
	
	UFUNCTION()
    void OnAccepted();
	
	UFUNCTION()
	void OnRejected();
	
	void HideDialog();
};

