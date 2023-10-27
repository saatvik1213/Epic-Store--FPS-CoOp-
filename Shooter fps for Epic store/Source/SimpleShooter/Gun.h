// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInterface.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Reload();

private:
	UPROPERTY(EditAnywhere)
	float MagSize = 30;
	float ReloadCount;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool DisableShoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UParticleSystem *MuzzleFlash;

	UPROPERTY(EditAnywhere)
	USoundBase* MuzzleSound;

	UPROPERTY(EditAnywhere)
	UParticleSystem *ImpactEffect;

	UPROPERTY(EditAnywhere)
	USoundBase *ImpactSound;

	UPROPERTY(EditAnywhere)
	USoundBase* EmptyMagSound;

	UPROPERTY(EditAnywhere, Category = "Decal")
	UMaterialInterface* ImpactDecal;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000;

	UPROPERTY(EditAnywhere)
	float Damage = 10;
	//UFUNCTION(BlueprintCallable)
	//void SetInvisible();
	UPROPERTY(EditAnywhere, Category = "Decal")
	FVector DecalSize;

	UPROPERTY(EditAnywhere, Category = "Decal")
	float DecalLife;

	bool GunTrace(FHitResult &Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;
};
