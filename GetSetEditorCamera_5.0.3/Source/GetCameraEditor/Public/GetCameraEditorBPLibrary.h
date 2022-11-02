// Copyright Epic Games, Inc. All Rights Reserved.
// Publisher: Scenegraph Studios LTD - https://ScenegraphStudios.com
// Publishing Date: 2021
// Setup tutorial documentation: https://www.scenegraphstudios.com/unreal-plugin-get-set-editor-camera-properties/
// Copywrite: Use the code as you wish. It's not hard, so it is pointless us being corporate and IP containing lol Please let us know if we could improve this work. 

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetCameraEditorBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UGetCameraEditorBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Editor Camera Location", Keywords = "Get Editor Camera Location"), Category = "Editor Camera")
		static FVector GetEditorCameraLocation();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Editor Camera Direction", Keywords = "Get Editor Camera Direction"), Category = "Editor Camera")
		static FVector GetEditorCameraFacingDirection();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Editor Camera Rotation", Keywords = "Get Editor Camera Rotation"), Category = "Editor Camera")
		static FRotator GetEditorCameraRotation();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Editor Camera Location", Keywords = "Set Editor Camera Location"), Category = "Editor Camera")
		static void SetViewLocation(FVector pnewviewlocation);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Editor Camera Rotation", Keywords = "Set Editor Camera Rotation"), Category = "Editor Camera")
		static void SetViewRotation(FVector pnewRotation);
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Spawn Example Actor", Keywords = "Spawn Example Actor"), Category = "Editor Camera")
		static void SpawnExampleActor(const UObject* WorldContextObject);

};
