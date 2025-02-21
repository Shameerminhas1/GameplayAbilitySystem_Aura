// copyright Game Strix Studio

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraDamageGameplayAbility.h"
#include "Actor/AuraFireBall.h"
#include "AuraFireBlast.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraFireBlast : public UAuraDamageGameplayAbility
{
	GENERATED_BODY()
public:

	virtual FString GetDescription(int32 Level) override;
	virtual FString	GetNextLevelDescription(int32 Level) override;
	UFUNCTION(BlueprintCallable)
	TArray<AAuraFireBall*> SpawnFireBalls();

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="FireBlast")
	int32 NumFireballs = 12;

private:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAuraFireBall> FireBallClass;
	
};
