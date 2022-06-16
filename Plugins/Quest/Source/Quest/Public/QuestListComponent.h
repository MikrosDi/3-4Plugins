// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestClass.h"
#include "Components/ActorComponent.h"
#include "QuestListComponent.generated.h"

class AQuestClass;
class UCurrentObjectives;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class QUEST_API UQuestListComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UQuestListComponent();
	
	void AddQuest(AQuestClass* Quest);
	
	const TArray<AQuestClass*>& GetQuests() const { return AcceptedQuests; }
	
	AQuestClass* GetActiveQuest() const { return ActiveQuest; }
	
	void SetActiveQuest(AQuestClass* Quest);
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnQuestAction, AQuestClass*);
	FOnQuestAction OnActiveQuestChanged;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UCurrentObjectives> CurrentObjectivesWidgetClass;

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY()
	TArray<AQuestClass*> AcceptedQuests;
	
	UPROPERTY()
	AQuestClass* ActiveQuest;

};
