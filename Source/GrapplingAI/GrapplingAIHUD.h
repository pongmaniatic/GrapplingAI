// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GrapplingAIHUD.generated.h"

UCLASS()
class AGrapplingAIHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGrapplingAIHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

