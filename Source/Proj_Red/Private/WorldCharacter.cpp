


#include "WorldCharacter.h"

// Sets default values
AWorldCharacter::AWorldCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Attach Ability COmponent To character
	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");

}

UAbilitySystemComponent* AWorldCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

// Called when the game starts or when spawned
void AWorldCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWorldCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

