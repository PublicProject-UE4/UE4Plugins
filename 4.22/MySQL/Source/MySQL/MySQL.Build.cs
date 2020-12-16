// Copyright 2018-2019, Sameek Kundu. All Rights Reserved. 

using UnrealBuildTool;
using System.IO;

public class MySQL: ModuleRules
{
    
    public MySQL(ReadOnlyTargetRules Target) : base(Target)
    {

        PrivateIncludePaths.AddRange(new string[]
        {
            "MySQL/Private"
               
        });

   

    PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        bEnableUndefinedIdentifierWarnings = false;
        PublicDefinitions.Add("NTDDI_WIN7SP1");

        PublicDependencyModuleNames.AddRange(new [] { "Core", "CoreUObject", "Engine", "RHI",
            "ImageWrapper", "RenderCore", "ImageWriteQueue", "InputCore" , "Projects" });
        PrivateDependencyModuleNames.AddRange(new[] {"XmlParser" , "Core", "ImageWrapper", "Engine"});


        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
            string SQLDirectory = Path.Combine(BaseDirectory, "Source/SQLLib");

            PublicDelayLoadDLLs.Add(Path.Combine(SQLDirectory, "MySql.Data.dll"));
            PublicDelayLoadDLLs.Add(Path.Combine(SQLDirectory, "Google.Protobuf.dll"));

            RuntimeDependencies.Add(Path.Combine(SQLDirectory, "SQL.dll"));
            RuntimeDependencies.Add(Path.Combine(SQLDirectory, "MySql.Data.dll"));
            RuntimeDependencies.Add(Path.Combine(SQLDirectory, "Google.Protobuf.dll"));

        }

    }
}