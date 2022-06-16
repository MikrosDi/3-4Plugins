// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "QuestDialog.h"
#include "GameFramework/Character.h"
#include "QuestSystemCharacter.generated.h"

UCLASS()
class QUEST_API AQuestSystemCharacter : public ACharacter, public IInteractableObject
{
	GENERATED_BODY()

public:
	
	AQuestSystemCharacter();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) override;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuestDialog> QuestDialogClass;
};
