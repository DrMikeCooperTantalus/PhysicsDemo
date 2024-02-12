// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PhysicsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICS_API APhysicsPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		static bool LineTraceActor(AActor* actor, FVector start, FVector end, FHitResult& hit);
};
