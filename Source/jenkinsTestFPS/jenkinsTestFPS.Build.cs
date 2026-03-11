// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class jenkinsTestFPS : ModuleRules
{
	public jenkinsTestFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
