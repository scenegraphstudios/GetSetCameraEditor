// Publisher: Scenegraph Studios LTD - https://ScenegraphStudios.com
// Publishing Date: 2021
// Setup tutorial documentation: https://www.scenegraphstudios.com/unreal-plugin-get-set-editor-camera-properties/
// Copywrite: Use the code as you wish. It's not hard, so it is pointless us being corporate and IP containing lol Please let us know if we could improve this work. 

using UnrealBuildTool;

public class GetCameraEditor : ModuleRules
{
	public GetCameraEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"UnrealEd",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
