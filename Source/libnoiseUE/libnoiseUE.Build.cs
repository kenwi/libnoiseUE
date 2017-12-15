// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class libnoiseUE : ModuleRules
{
	public libnoiseUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"libnoiseUE/Public",
                "libnoiseUE/Public/model",
                "libnoiseUE/Public/module"
            }
			);


        PrivateIncludePaths.AddRange(
            new string[] {
                "libnoiseUE/Private",
                "libnoiseUE/Private/model",
                "libnoiseUE/Private/module"
            }
            );

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
			);
	}
}
