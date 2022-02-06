// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OlegShowcase : ModuleRules
{
	public OlegShowcase(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
