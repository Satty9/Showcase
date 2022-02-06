// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OlegShowcaseHUD.generated.h"

UCLASS()
class AOlegShowcaseHUD : public AHUD
{
	GENERATED_BODY()

public:
	AOlegShowcaseHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

