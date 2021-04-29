// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NormalEnemy.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UFGVisionSensingComponent;


UCLASS()
class GRAPPLINGAI_API ANormalEnemy : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleDefaultsOnly, Category = collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly, Category = collision)
	UCapsuleComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, Category = collision)
	UCapsuleComponent* VisionSensingComponent;

	ANormalEnemy();

	virtual float GetDefaultHalfHeight() const override;

protected:

	virtual void BeginPlay() override;

	UCapsuleComponent* GetCapsule() const { return Capsule; }

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
