

using UnrealBuildTool;
using System.Collections.Generic;

public class Proj_RedTarget : TargetRules
{
	public Proj_RedTarget(TargetInfo Target) : base(Target)
	{



		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "Proj_Red" } );
	}
}
