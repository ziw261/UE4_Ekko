// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ekko : ModuleRules
{
	public Ekko(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
