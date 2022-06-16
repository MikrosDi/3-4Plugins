// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LocationMarker.generated.h"

UINTERFACE()
class ULocationMarker : public UInterface
{
	GENERATED_BODY()
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnLocationReached,
AActor* /*LocationMarker*/,
AActor* /*OverlappedActor*/);


class QUEST_API ILocationMarker
{
GENERATED_BODY()
public:
	
virtual void NotifyOverlapWithActor(AActor* LocationMarker,
AActor* OverlappedActor)
{
if (OnLocationReached.IsBound())
{
OnLocationReached.Broadcast(LocationMarker, OverlappedActor);
}
}
FOnLocationReached OnLocationReached;
};



