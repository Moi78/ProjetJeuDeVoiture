// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "WheeledVehicleMovementComponent.h"
#include "bpCustomNode.generated.h"

/**
 * 
 */
UCLASS()
class PROJETJEUDEVOITURE_API UbpCustomNode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void StopEveryMovement(USkeletalMeshComponent* Target_Mesh, UWheeledVehicleMovementComponent* Target_Movement_Component);
	
};
