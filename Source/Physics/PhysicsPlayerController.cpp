// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsPlayerController.h"

bool APhysicsPlayerController::LineTraceActor(AActor* actor, FVector start, FVector end, FHitResult& hit)
{
	FHitResult ResultActor;
	FCollisionQueryParams Params;
	return actor->ActorLineTraceSingle(hit, start, end, ECollisionChannel::ECC_Camera, Params);
}
