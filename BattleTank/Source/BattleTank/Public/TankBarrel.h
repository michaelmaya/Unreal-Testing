// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"


/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent) )
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxDegreesPerSecond = 20.f;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxElevationInDegrees = 40.f;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MinElevationInDegrees = 0.f;
	
};
