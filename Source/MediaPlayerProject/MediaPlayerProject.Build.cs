// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MediaPlayerProject : ModuleRules
{
	public MediaPlayerProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {"AITestSuite"});
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
		"Core",
		"CoreUObject", 
		"Engine", 
		"InputCore", 
		"HeadMountedDisplay",
		"UMG",
		"Slate",
		"SlateCore",
		"Quest"
		 });
	}
}
