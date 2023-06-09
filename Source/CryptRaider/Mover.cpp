// Fill out your copyright notice in the Description page of Project Settings.

#include "Mover.h"
#include "Containers/UnrealString.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor *Owner = GetOwner();

	FVector OwnerLocation = Owner->GetActorLocation();
	FString OwnerName = Owner->GetActorNameOrLabel();
	FString OwnerLocationString = OwnerLocation.ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("The object: %s has is location in: %s"), *OwnerName, *OwnerLocationString);
	// ...
}
