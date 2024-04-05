

using UnrealBuildTool;
using System.Collections.Generic;

public class Proj_RedEditorTarget : TargetRules
{
	public Proj_RedEditorTarget(TargetInfo Target) : base(Target)
	{

		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Proj_Red","GameplayTags", "GameplayTasks" } );
	}
}
