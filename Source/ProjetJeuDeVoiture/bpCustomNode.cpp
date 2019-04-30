// Fill out your copyright notice in the Description page of Project Settings.


#include "bpCustomNode.h"

void UbpCustomNode::StopEveryMovement(USkeletalMeshComponent* Target_Mesh, UWheeledVehicleMovementComponent* Target_Movement_Component) {
	Target_Movement_Component->SetHandbrakeInput(true);
	Target_Mesh->SetAllPhysicsLinearVelocity(FVector(0.0f, 0.0f, 0.0f));
	Target_Movement_Component->StopMovementImmediately();
	Target_Movement_Component->SetHandbrakeInput(false);
}