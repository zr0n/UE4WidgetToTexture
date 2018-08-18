// Copyright 199    8-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WidgetToTexture : ModuleRules
{
	public WidgetToTexture(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
                "WidgetToTexture/Public"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                "WidgetToTexture/Private"
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "RenderCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UMG", "RenderCore" });


        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
