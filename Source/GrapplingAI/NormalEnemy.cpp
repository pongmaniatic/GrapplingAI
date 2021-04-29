

#include "NormalEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ANormalEnemy::ANormalEnemy()
{
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));

	RootComponent = Capsule;
	Capsule->InitCapsuleSize(55.f, 96.0f);

	//Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	//Mesh->SetupAttachment(Capsule);
	//Mesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	//Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));


	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANormalEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANormalEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called every frame
float ANormalEnemy::GetDefaultHalfHeight() const
{
	return Capsule->GetScaledCapsuleHalfHeight();
}



