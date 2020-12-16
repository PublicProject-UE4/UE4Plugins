using System.IO;
using UnrealBuildTool;

public class MySQL: ModuleRules
{
    public MySQL(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateIncludePaths.AddRange(new string[]
        {
            "MySQL/Private"
               
        });

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new [] { "Core", "CoreUObject", "Engine", "InputCore" , "Projects" });

        PrivateDependencyModuleNames.AddRange(new[] {"XmlParser" , "Core", "ImageWrapper", "Engine"});

        string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
        string SQLDirectory = Path.Combine(BaseDirectory, "SQLLib");
        string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";

        PublicIncludePaths.Add(Path.Combine(SQLDirectory, PlatformString , "SQL.dll"));
        PublicIncludePaths.Add(Path.Combine(SQLDirectory, PlatformString , "MySql.Data.dll"));

        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString , "SQL.dll"));
        RuntimeDependencies.Add(Path.Combine(SQLDirectory, PlatformString , "MySql.Data.dll"));

    }
}