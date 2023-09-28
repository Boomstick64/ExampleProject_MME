// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExampleProject_MME : ModuleRules
{
	public ExampleProject_MME(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
