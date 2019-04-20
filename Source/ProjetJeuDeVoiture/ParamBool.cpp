// Fill out your copyright notice in the Description page of Project Settings.


#include "ParamBool.h"

// Sets default values for this component's properties
UParamBool::UParamBool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PROPERTY = false;

	// ...
}


// Called when the game starts
void UParamBool::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UParamBool::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

