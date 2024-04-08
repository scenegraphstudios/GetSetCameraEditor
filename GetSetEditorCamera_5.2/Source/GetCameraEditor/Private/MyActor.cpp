// Fill out your copyright notice in the Description page of Project Settings.
// Publisher: Scenegraph Studios LTD - https://ScenegraphStudios.com
// Publishing Date: 2021
// Setup tutorial documentation: https://www.scenegraphstudios.com/unreal-plugin-get-set-editor-camera-properties/
// Copywrite: Use the code as you wish. It's not hard, so it is pointless us being corporate and IP containing lol Please let us know if we could improve this work. 

#include "MyActor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
