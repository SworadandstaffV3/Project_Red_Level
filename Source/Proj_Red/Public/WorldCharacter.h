

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "WorldCharacter.generated.h"

UCLASS()
class PROJ_RED_API AWorldCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWorldCharacter();

	//Gas System SetUp. We just want the default component to manipulate, Stats will be handled in our world stat component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GAS System")
	UAbilitySystemComponent* AbilitySystemComp;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	
	// End GAS Setup

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
