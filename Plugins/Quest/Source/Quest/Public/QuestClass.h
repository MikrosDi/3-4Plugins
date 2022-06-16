// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestClass.generated.h"

class UObjective;

UCLASS()
class QUEST_API AQuestClass : public AActor
{
	GENERATED_BODY()

public:

	AQuestClass();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintPure)
	const TArray<UObjective*>& GetObjectives() const {return Objectives; }
	
	bool IsCompleted();
	
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnQuestStatusUpdated, AQuestClass*)
	FOnQuestStatusUpdated OnQuestStatusUpdated;
	
	UPROPERTY(EditAnywhere)
	FText Name;
	
	UPROPERTY(EditAnywhere)
	FText Description;
	
	UPROPERTY(EditAnywhere)
	TArray<UObjective*> Objectives;
	
	UPROPERTY(EditAnywhere)
	bool bIsStoryQuest = true;
	
	UPROPERTY(EditAnywhere)
	bool bKeepObjectivesOrder = true;
	
	UPROPERTY(EditAnywhere)
	AQuestClass* PreviousQuest;
	
	UPROPERTY(VisibleAnywhere)
	bool bIsTaken = false;

	UFUNCTION(BlueprintCallable, CallInEditor)
    void UpdateLocation();
	
	UFUNCTION()
	void TakeQuest(AActor* Character);
	
	void OnObjectiveCompleted(UObjective* Objective);

#if WITH_EDITOR
	
	UFUNCTION(CallInEditor)
    void AddLocationObjective();
	
	UFUNCTION(CallInEditor)
	void AddInteractObjective();
	
#endif
	
};
