#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"
#include "Inventory.h"
#include "Components/ActorComponent.h"
#include "WorldStats.generated.h"



USTRUCT(BlueprintType)
struct  FBaseValues

{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | HealthPoints ", meta = (IgnoreForMemberInitializationTest))
	float HealthPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | Shield ", meta = (IgnoreForMemberInitializationTest))
	float Shield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | Stamina ", meta = (IgnoreForMemberInitializationTest))
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | RadiationLevel ", meta = (IgnoreForMemberInitializationTest))
	float RadiationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | ArmorRating ", meta = (IgnoreForMemberInitializationTest))
	int32 ArmorRating;

// This Is a container for now, I think we can use tags and Gas for effect. Need mor clerification
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues | EnvironmentalEffects ")
	FGameplayTagContainer EnvironmentalEffects;
};


USTRUCT(BlueprintType)
struct  FPlayerVariables
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DecisionMaking")
	FGameplayTagContainer DecisionMade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DecisionMaking")
	FGameplayTagContainer ExploredAreas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "FactionAlignment")
	int32 FactionAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags | Quest")
	FGameplayTag Dialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WordStatus")
	FGameplayTagContainer WordStatus;

};


USTRUCT(BlueprintType)
struct  FSurvivalVariables
{
	GENERATED_BODY()
	//Battery
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | MaxBatteryLife ", meta = (IgnoreForMemberInitializationTest))
	float MaxBatteryLife = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | BatteryLife | CurrentBatteryLife ", meta = (IgnoreForMemberInitializationTest))
	float CurrentBatteryLife = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | BatteryLife | BatteryConsumptionRate ", meta = (IgnoreForMemberInitializationTest))
	float BatteryConsumptionRate = 0;
	//Radiation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | Radiation | RadiationLevel ", meta = (IgnoreForMemberInitializationTest))
	float RadiationLevel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | Radiation | MaxSafeRadiation ", meta = (IgnoreForMemberInitializationTest))
	float MaxSafeRadiation = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | Radiation | RadiationDamageRate ", meta = (IgnoreForMemberInitializationTest))
	float RadiationDamageRate = 0;

	//NanoBot
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | NanobotIntegrity | NanobotHealth ", meta = (IgnoreForMemberInitializationTest))
	float NanobotHealth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | NanobotIntegrity | NanobotMaxHealth ", meta = (IgnoreForMemberInitializationTest))
	float NanobotMaxHealth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SurvivalVariables | NanobotIntegrity | NanobotDegradationRate ", meta = (IgnoreForMemberInitializationTest))
	float NanobotDegradationRate = 0;

};


USTRUCT(BlueprintType)
struct  FExternalInfluence
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "EconomicStatus")
	float Wealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "EconomicStatus")
	float Tradehistory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "EconomicStatus")
	float investment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "EventParticipationScore")
	int32 EventParticipationScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "EnemyDefeatCount")
	int32 EnemyDefeatCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "NPCInteractionCount")
	int32 NPCInteractionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
	UInventory* Primarry;


};

USTRUCT(BlueprintType)
struct  FCombatvariables
{
	GENERATED_BODY()
	//Melee Damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Melee Damage")
	float MeleeBaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Melee Damage")
	float MeleeDamageModifier;

	//Ranged Damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Ranged Damage")
	float RangedBaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Ranged Damage")
	float RangedDamageModifier;

	//Ammunition Count
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Ammunition Count")
	int32 MaxAmmoCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Ammunition Count")
	int32 CurrentAmmo;

	//Weapon Durability/Battery Life
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Weapon Durability/Battery Life")
	float MaxDurability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Weapon Durability/Battery Life")
	float CurrentDurability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Weapon Durability/Battery Life")
	float DurabilityDepletionRate;

	//Regeneration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Regeneration")
	float RegenRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Regeneration")
	float MaxRegenLimit;

	//Attack Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Attack Speed")
	float BaseAttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest), Category = "Combatvariables | Attack Speed")
	float AttackSpeedModifier;






};



UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJ_RED_API UWorldStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWorldStats();


	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerVariables")
	FPlayerVariables PlayerVariables;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Variables")
	FSurvivalVariables SurvivalVariables;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "External Influence")
	FExternalInfluence ExternalInfluence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseValues")
	FBaseValues BaseValues;

	

	//Function to find this component from any object class to pull specific info
	UFUNCTION(BlueprintPure, Category = "WorldStat |")
	static UWorldStats* FindWorldStatsComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UWorldStats>() : nullptr); }



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
