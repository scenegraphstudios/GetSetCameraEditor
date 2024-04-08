// Copyright Epic Games, Inc. All Rights Reserved.
// Publisher: Scenegraph Studios LTD - https://ScenegraphStudios.com
// Publishing Date: 2021
// Setup tutorial documentation: https://www.scenegraphstudios.com/unreal-plugin-get-set-editor-camera-properties/
// Copywrite: Use the code as you wish. It's not hard, so it is pointless us being corporate and IP containing lol Please let us know if we could improve this work. 

#include "GetCameraEditorBPLibrary.h"
#include "GetCameraEditor.h"
#include "Editor/UnrealEd/Public/EditorViewportClient.h"
#include "Editor/EditorEngine.h"
#include "MyActor.h"

UGetCameraEditorBPLibrary::UGetCameraEditorBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FVector UGetCameraEditorBPLibrary::GetEditorCameraLocation() {
	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	FVector editorCameraLocation = client->GetViewLocation();
	return editorCameraLocation;
}

FVector UGetCameraEditorBPLibrary::GetEditorCameraFacingDirection() {
	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	FVector editorCameratRotation = client->GetViewRotation().Vector();
	return editorCameratRotation;
}

FRotator UGetCameraEditorBPLibrary::GetEditorCameraRotation() {
	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	FRotator editorCameratRotation = client->GetViewRotation();
	return editorCameratRotation;
}

void UGetCameraEditorBPLibrary::SetViewLocation(FVector pnewLocation) {
	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	client->SetViewLocation(pnewLocation);
}

void UGetCameraEditorBPLibrary::SetViewRotation(FVector pnewRotation) {
	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	client->SetViewRotation(pnewRotation.Rotation());
}


void UGetCameraEditorBPLibrary::SpawnExampleActor(const UObject* WorldContextObject)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);

	FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
	FVector editorCameraDirection = client->GetViewRotation().Vector();
	FVector editorCameraPosition = client->GetViewLocation();

	FVector actorLocation = editorCameraPosition + (editorCameraDirection * 100);
	FRotator actorRotation = FRotationMatrix::MakeFromX(client->GetViewRotation().GetInverse().Add(0, 180, 0).GetInverse().Vector()).Rotator();

	AMyActor* exampleSpawnActor = World->SpawnActor<AMyActor>(actorLocation, actorRotation);
}