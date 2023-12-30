// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor() :
instanceName_("instanceName"),
enemyNum_(20),
isAlive_(1)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	ShowActorInformation();
}

void ACppBaseActor::ShowActorInformation()
{
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *instanceName_.ToString());
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), enemyNum_);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), isAlive_);
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

