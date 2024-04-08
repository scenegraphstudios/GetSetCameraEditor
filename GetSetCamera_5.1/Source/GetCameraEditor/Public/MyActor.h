// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// Publisher: Scenegraph Studios LTD - https://ScenegraphStudios.com
// Publishing Date: 2021
// Setup tutorial documentation: https://www.scenegraphstudios.com/unreal-plugin-get-set-editor-camera-properties/
// Copywrite: Use the code as you wish. It's not hard, so it is pointless us being corporate and IP containing lol Please let us know if we could improve this work. 

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class GETCAMERAEDITOR_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EditorCamera")
	class USceneComponent* SceneComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
