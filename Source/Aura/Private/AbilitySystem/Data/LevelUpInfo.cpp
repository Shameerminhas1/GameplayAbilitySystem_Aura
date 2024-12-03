// copyright Game Strix Studio


#include "AbilitySystem/Data/LevelUpInfo.h"

int32 ULevelUpInfo::FindLevelForXP(int32 XP)
{
	int32 Level = 1;
	bool bSearching = true;
	while (bSearching)
	{
		//LevelUpInformation[1] = level 1 information
		//LevelUpInformation[2] = level 2 information
		if (LevelUpInformation.Num() - 1 <= Level) return Level;
		if (XP >= LevelUpInformation[Level].LevelUpRequirement)
		{ 
			Level++;
		}
		else
		{
			bSearching = false;
		}
	}
	return Level;
}