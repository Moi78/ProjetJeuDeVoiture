// Fill out your copyright notice in the Description page of Project Settings.


#include "getParamInt.h"

// Sets default values for this component's properties
UgetParamInt::UgetParamInt()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PROPERTY = 0;
	// ...
}


// Called when the game starts
void UgetParamInt::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UgetParamInt::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

