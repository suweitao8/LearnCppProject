// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LearnPlugin : ModuleRules
{
	public LearnPlugin(ReadOnlyTargetRules Target) : base(Target)
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
				"Core", "Blutility", "Projects"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AutomationController",
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"Slate",
				"SlateCore",
				"EditorFramework",
				"UnrealEd",
				"Kismet",
				"AssetDefinition",
				"AssetRegistry",
				"AssetTools",
				"WorkspaceMenuStructure",
				"ContentBrowser",
				"ContentBrowserData",
				"ClassViewer",
				"CollectionManager",
				"PropertyEditor",
				"BlueprintGraph",
				"Json",
				"JsonUtilities",
				"UMG",
				"UMGEditor",
				"KismetCompiler",
				"ToolMenus",
				"RHI",
				"RenderCore",
				"ImageWrapper",
				"ImageWriteQueue",
				"DeveloperSettings",
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
