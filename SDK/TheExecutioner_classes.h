#pragma once

// Name: DeadB, Version: 5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class TheExecutioner.ActivateTormentModeInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_1Y9W[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_29IF[0x10];                                    // 0x06E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ActivateTormentModeInteraction");
		return ptr;
	}



	void SetTormentMode(class ATormentMode* tormentModeComponent);
};

// Class TheExecutioner.Addon_TormentMode_17
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_TormentMode_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _blindnessDuration;                                        // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5VQH[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_17");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_18
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_TormentMode_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _obliviousDuration;                                        // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3RYJ[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_18");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_19
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UAddon_TormentMode_19 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_19");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_20
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UAddon_TormentMode_20 : public UItemAddon
{
public:
	float                                              _lingerDuration;                                           // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R14A[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_20");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_21
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UAddon_TormentMode_21 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	bool                                               _revealSurvivorsInAgony;                                   // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _revealSurvivorsNotInAgony;                                // 0x02A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W4L2[0x2];                                     // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _range;                                                    // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealDuration;                                           // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MU3J[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Addon_TormentMode_21");
		return ptr;
	}



};

// Class TheExecutioner.AgonyComponent
// 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
class UAgonyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4DPS[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInAgony;                                                // 0x00C8(0x0030) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isAgonyMoriable;                                          // 0x00F8(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _agonyNumberOfHookForMiniMori;                             // 0x0128(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2RYW[0x38];                                    // 0x0150(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _inAttackTrailDamageCooldown;                              // 0x0188(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UENF[0x7];                                     // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _attackTrailDamageCooldownTime;                            // 0x0190(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OXGM[0x18];                                    // 0x01B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAgonyDisplayFxEvent>                _showAgonyFXEvents;                                        // 0x01D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAgonyDisplayFxEvent>                _hideAgonyFXEvents;                                        // 0x01E0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TWHQ[0x8];                                     // 0x01F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.AgonyComponent");
		return ptr;
	}



	void ShowAgonyBarbWireFX_Cosmetic();
	void OnTrailEffectStop_Cosmetic();
	void OnTrailEffectStart_Cosmetic();
	void OnShowBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnRep_IsInAgony();
	void OnLocallyObservedChanged(bool IsLocallyObserved);
	void OnHitInAgony_Cosmetic();
	void OnHitByTormentAttackTrail_Cosmetic();
	void OnHideBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnAgonyChanged_Cosmetic(bool IsInAgony);
	bool IsInAgony();
	bool IsAgonyMoriable();
	void HideAgonyBarbWireFX_Cosmetic();
	void Authority_OnDrainStageChanged(int DrainStage, class ADBDPlayer* Target);
	void Authority_OnAttackTrailDamageCooldownTimerDone();
};

// Class TheExecutioner.AgonyMoriInteraction
// 0x0000 (FullSize[0x0720] - InheritedSize[0x0720])
class UAgonyMoriInteraction : public UKillInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.AgonyMoriInteraction");
		return ptr;
	}



};

// Class TheExecutioner.AgonySubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isInAgony;                                                // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInTormentTrail;                                         // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInTormentTrailEffect;                                   // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInDeathBed;                                             // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDeadInDeathBed;                                         // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInStruggleInDeathBed;                                   // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LFVK[0xA];                                     // 0x04F6(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.AgonySubAnimInstance");
		return ptr;
	}



};

// Class TheExecutioner.BaseTormentTrailPoint
// 0x0100 (FullSize[0x0330] - InheritedSize[0x0230])
class ABaseTormentTrailPoint : public AActor
{
public:
	unsigned char                                      UnknownData_U5Z3[0x18];                                    // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            _collisionComponent;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _collisionRadius;                                          // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JFPF[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _tormentTrailAliveTime;                                    // 0x0258(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MO6J[0x30];                                    // 0x02D8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplineMeshComponent*                        _splineMeshComponent;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UStaticMesh*>                         _trailMeshList;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _indexInTrail;                                             // 0x0320(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_545Z[0xF];                                     // 0x0321(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.BaseTormentTrailPoint");
		return ptr;
	}



	void EndOfDisapearCosmetic();
	void DisappearCosmetic();
};

// Class TheExecutioner.BloodPact
// 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
class UBloodPact : public UPerk
{
public:
	unsigned char                                      UnknownData_B090[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _dyingToInjured;                                           // 0x03E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _fullHealthStateOnly;                                      // 0x03E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5F17[0x2];                                     // 0x03EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hasteEffectRange;                                         // 0x03EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffectMovementSpeedIncrease[0x3];                    // 0x03F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2W8C[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _ownerStatusEffect;                                        // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                               _obsessionStatusEffect;                                    // 0x0408(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                               _ownerHasteStatusEffect;                                   // 0x0410(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                               _otherPlayerHasteStatusEffect;                             // 0x0418(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _otherPlayer;                                              // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_55BO[0x20];                                    // 0x0428(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.BloodPact");
		return ptr;
	}



	void Authority_OnInRangeChanged(bool InRange);
};

// Class TheExecutioner.BloodPactEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UBloodPactEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.BloodPactEffect");
		return ptr;
	}



};

// Class TheExecutioner.DeathBedAntiCampComponent
// 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
class UDeathBedAntiCampComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EO6M[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _anticampZoneDistance;                                     // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _anticampZoneTimeToTrigger;                                // 0x0128(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N8R7[0x40];                                    // 0x0150(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.DeathBedAntiCampComponent");
		return ptr;
	}



	void Multicast_TriggerDeathBedRelocate();
	void Authority_OnInRangeChanged(bool InRange);
};

// Class TheExecutioner.DeathBedInteractable
// 0x0138 (FullSize[0x0460] - InheritedSize[0x0328])
class ADeathBedInteractable : public AInteractable
{
public:
	unsigned char                                      UnknownData_NTDU[0x10];                                    // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             _root;                                                     // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACamperPlayer*                               _inDeathBedCamper;                                         // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _rescueChargeableComponent;                                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      _deathBedSkeletalMesh;                                     // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               _interactionZone;                                          // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               _playerOverlapZone;                                        // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0368(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AJWS[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               _deathBedCollision;                                        // 0x0380(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OWKX[0x28];                                    // 0x0388(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationMontageSlave*                      _animationMontageSlave;                                    // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                _montageToPlay;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6QII[0x4];                                     // 0x03C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _rescuerSnapPosition;                                      // 0x03C4(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDeathBedAntiCampComponent*                  _deathBedAnticampComponent;                                // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y6FB[0x40];                                    // 0x03D8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _anticampDrainCooldownTime;                                // 0x0418(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H0A0[0x18];                                    // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                               // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.DeathBedInteractable");
		return ptr;
	}



	void TeleportCamperToDeathBed();
	void StartPlayerAbsorbedByGround();
	void SetInDeathBedCamper(class ACamperPlayer* CamperPlayer);
	void PlayerOverlapZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayerOverlapZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSkillCheckFailed_Cosmetic();
	void OnSkillCheckFailed();
	void OnRescueCancelled();
	void OnRelocateStart_Cosmetic();
	void OnDeathBedDeathEnd();
	void Multicast_RelocateToOtherDeathBed(class ADeathBedInteractable* deathBed, class ACamperPlayer* CamperPlayer);
	struct FVector GetRescuerSnapPosition();
	class UMontagePlayer* GetMontagePlayer();
	class ACamperPlayer* GetInDeathBedCamper();
	void FX_SurvivorSavedFromDeathBed();
	void FX_DeathBedAppear();
	void DeathBedDisappear();
	bool CanRescueSurvivor();
	void ActivateDeathBed(bool value);
};

// Class TheExecutioner.DeathBedOutlineUpdateStrategy
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.DeathBedOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheExecutioner.DeathBedRescueInteraction
// 0x0038 (FullSize[0x0710] - InheritedSize[0x06D8])
class UDeathBedRescueInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_LGAF[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	struct FDBDTunableRowHandle                        _loudNoiseRange;                                           // 0x06E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OS14[0x8];                                     // 0x0708(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.DeathBedRescueInteraction");
		return ptr;
	}



	struct FVector GetRescuerSnapPosition();
};

// Class TheExecutioner.Deathbound
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class UDeathbound : public UPerk
{
public:
	float                                              _distanceFromRescuedSurvivorForOblivious[0x3];             // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _activationDuration;                                       // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _rescueDistanceFromKillerToActivate;                       // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQ7J[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealLocationDuration;                                   // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _unhook;                                                   // 0x03EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _fromDyingState;                                           // 0x03ED(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XZLD[0x2];                                     // 0x03EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStatusEffect*>                       _obliviousStatusEffects;                                   // 0x03F0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z91F[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ADBDPlayer*>                          _survivorsToReveal;                                        // 0x0410(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_86MF[0x8];                                     // 0x0420(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Deathbound");
		return ptr;
	}



	void OnRep_SurvivorsToReveal();
	void MakeSurvivorScream(class ACamperPlayer* survivor);
	float GetRevealLocationDuration();
};

// Class TheExecutioner.ExecutionerTormentAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UExecutionerTormentAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttack");
		return ptr;
	}



	void Server_TormentTryHitTargetNotInCoolDown(class ADBDPlayer* Target);
	void Multicast_TormentHitTarget(class ADBDPlayer* Target);
};

// Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UExecutionerTormentAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ExecutionerTormentAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UExecutionerTormentAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackMissSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ExecutionerTormentAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UExecutionerTormentAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackObstructSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ForcedPenance
// 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
class UForcedPenance : public UPerk
{
public:
	float                                              _perkActivationDuration[0x3];                              // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyOblivious;                                           // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyBroken;                                              // 0x03DD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PJQR[0x2];                                     // 0x03DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStatusEffect*>                       _camperObliviousEffects;                                   // 0x03E0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UStatusEffect*>                       _camperBrokenEffects;                                      // 0x03F0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.ForcedPenance");
		return ptr;
	}



};

// Class TheExecutioner.MobileTormentTrailRenderer
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class AMobileTormentTrailRenderer : public AActor
{
public:
	class UInstancedStaticMeshComponent*               _pillarIsmComponent;                                       // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _wireIsmComponent;                                         // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _trailIsmComponent;                                        // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _pillarOutlineIsmComponent;                                // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _wireOutlineIsmComponent;                                  // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ABaseTormentTrailPoint*, struct FTormentTrailPointInfo> _instanceMap;                                              // 0x0258(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _trailMaterialInstanceDynamic;                             // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.MobileTormentTrailRenderer");
		return ptr;
	}



	void Multicast_RemoveInstance(class ABaseTormentTrailPoint* TrailPoint);
	void Multicast_AddInstance(class ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint);
};

// Class TheExecutioner.RepressedAlliance
// 0x0078 (FullSize[0x0448] - InheritedSize[0x03D0])
class URepressedAlliance : public UPerk
{
public:
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x03D0(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              _repairTimesNeededToActivate[0x3];                         // 0x0408(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorBlockDuration;                                   // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                      _currentRepairInteractionWithAbility;                      // 0x0418(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O69W[0x18];                                    // 0x0420(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGenerator*                                  _blockedGenerator;                                         // 0x0438(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XRNS[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.RepressedAlliance");
		return ptr;
	}



	void Server_OnActionInputPressed(class AGenerator* Generator);
	void OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction);
	void OnRep_BlockedGenerator(class AGenerator* oldGenerator);
};

// Class TheExecutioner.SendToDeathBedInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class USendToDeathBedInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_B47S[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	class ADeathBedInteractable*                       _deathBed;                                                 // 0x06E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0N95[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.SendToDeathBedInteraction");
		return ptr;
	}



	void Multicast_SendCamperToDeathBed(class ADeathBedInteractable* deathBed);
	class ACamperPlayer* GetOwningSurvivor();
	void FX_InteractionStart();
	void FX_InteractionCancel();
};

// Class TheExecutioner.SoulGuard
// 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
class USoulGuard : public UPerk
{
public:
	float                                              _cooldownLevels[0x3];                                      // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _recover;                                                  // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4T3X[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _enduranceEffectDuration[0x3];                             // 0x03E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V5UC[0x14];                                    // 0x03EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.SoulGuard");
		return ptr;
	}



	void Authority_ShowOnKOPreventedFX();
	void Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult);
};

// Class TheExecutioner.TormentTrailDetectorComponent
// 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
class UTormentTrailDetectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9NM3[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATormentTrailPoint*>                  _overlappedTrailPoints;                                    // 0x00D0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTagStateBool                               _isInTormentTrail;                                         // 0x00E0(0x0030) (Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTagStateBool                               _isInTormentTrailEffect;                                   // 0x0110(0x0030) (Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MMWY[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _inTormentTrailLastingEffectTime;                          // 0x0148(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QX5D[0x30];                                    // 0x01C8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentTrailDetectorComponent");
		return ptr;
	}



};

// Class TheExecutioner.SurvivorTormentTrailDetector
// 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent
{
public:
	unsigned char                                      UnknownData_2H1N[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.SurvivorTormentTrailDetector");
		return ptr;
	}



};

// Class TheExecutioner.TheExecutionerAnimInstance
// 0x0088 (FullSize[0x0630] - InheritedSize[0x05A8])
class UTheExecutionerAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_KH53[0x4];                                     // 0x05A8(0x0004) Fix Super Size
	float                                              _tormentModeVerticalInput;                                 // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _tormentModeHorizontalInput;                               // 0x05B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTZY[0x7C];                                    // 0x05B4(0x007C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TheExecutionerAnimInstance");
		return ptr;
	}



	void NoInputFeedbackCosmetic();
};

// Class TheExecutioner.TheExecutionerCheatComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTheExecutionerCheatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TheExecutionerCheatComponent");
		return ptr;
	}



	void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, const struct FString& localPlayerId);
	void DBD_SetAgonyOnLocallyControlledPlayer(bool value, const struct FString& localPlayerId);
	void DBD_LocalKillSurvivorInDeathBed();
	void DBD_DisplayAllDeathBed(bool value);
	void DBD_DeathBedPlayStruggleHitReaction();
};

// Class TheExecutioner.TrailControllerBase
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class ATrailControllerBase : public AActor
{
public:
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollection;                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _distanceBetweenTormentTrailPoint;                         // 0x0238(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineComponent*                            _splineComponent;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6V5P[0x10];                                    // 0x0268(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheExecutioner_ETrailType                          _trailType;                                                // 0x0280(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UYFS[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TrailControllerBase");
		return ptr;
	}



	void RemoveTormentTrailController();
	void OnTrailPointDeath(class ABaseTormentTrailPoint* baseTrailPoint);
	void OnAcquireChanged(bool acquired);
	void ActivateCosmetic(bool value);
};

// Class TheExecutioner.TormentAttackTrailController
// 0x0178 (FullSize[0x0400] - InheritedSize[0x0288])
class ATormentAttackTrailController : public ATrailControllerBase
{
public:
	class UClass*                                      _tormentTrailAttackPointClass;                             // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _tormentTrailAttackSign;                                   // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _trailSpawnDelay;                                          // 0x0298(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeIntervalBetweenPointsSpawn;                           // 0x02C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _attackTrailLenght;                                        // 0x02E8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _consideredAsSlopeAngle;                                   // 0x0368(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                          _pointsTransform;                                          // 0x0390(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _slopeDetectionOverGroundVector;                           // 0x03A0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _groundDetectionEndVector;                                 // 0x03AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _slopeCompensationVector;                                  // 0x03B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7RE0[0x1C];                                    // 0x03C4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpawnedAttackPoint>                 _spawnedAttackPointList;                                   // 0x03E0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _trailSpawnStarted;                                        // 0x03F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6OWG[0x3];                                     // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _soundDistanceOnTrail;                                     // 0x03F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                               // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentAttackTrailController");
		return ptr;
	}



	void OnTrailPointRemovedCosmetic(int Index);
	void OnStartTrailTimerDone();
	void OnIntervalBetweenPointsTimerDone();
	void OnAttackTrailStartCosmetic();
	void Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
	void DisplayAttackTrailSpawnSign();
};

// Class TheExecutioner.TormentAttackTrailPoint
// 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
class ATormentAttackTrailPoint : public ABaseTormentTrailPoint
{
public:
	unsigned char                                      UnknownData_SUX1[0x30];                                    // 0x0330(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _attackPointDelayToEnableCollision;                        // 0x0360(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentAttackTrailPoint");
		return ptr;
	}



	void DisplayTrailSplineMesh(class USplineComponent* splinemesh, int indexInTrail);
};

// Class TheExecutioner.TormentMode
// 0x0450 (FullSize[0x0918] - InheritedSize[0x04C8])
class ATormentMode : public ACollectable
{
public:
	unsigned char                                      UnknownData_4O9K[0x78];                                    // 0x04C8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _activateTormentModeCharge;                                // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _tormentModeCharge;                                        // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BKC2[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;                            // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailSpawnerComponent*               _tormentTrailSpawnerComponent;                             // 0x0568(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                     // 0x0570(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;           // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                               // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentAttackTrailControllerPool;                         // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailControllerPool;                     // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailPointPool;                                    // 0x0598(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailPointPool;                          // 0x05A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _activateTormentModeSecondsToCharge;                       // 0x05A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeMaxCharge;                                     // 0x05D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeChargeRate;                                    // 0x05F8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeDischargeRate;                                 // 0x0678(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModePauseChargeRate;                               // 0x06F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeAttackConsumePower;                            // 0x0720(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeMinimumPercentToActivate;                      // 0x0748(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeMouseYawScale;                                 // 0x0770(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeYawAdjustTime;                                 // 0x0798(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeGamePadYawScale;                               // 0x07C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeYawInputLimit;                                 // 0x07E8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeNotMovingYawScaleMultiplier;                   // 0x0810(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeNotMovingYawAdjustTime;                        // 0x0838(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeWalkSpeed;                                     // 0x0860(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _normalWalkSpeed;                                          // 0x0888(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeForcedPitch;                                   // 0x08B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _agonyComponentClass;                                      // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PLEB[0x10];                                    // 0x08E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _killerTormentTrailDetectorClass;                          // 0x08F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _survivorTormentTrailDetectorClass;                        // 0x08F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentModeCooldownInteraction*             _tormentModeCooldownInteraction;                           // 0x0900(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _tormentModeChargeSpeedCurve;                              // 0x0908(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _mobileTormentTrailRendererClass;                          // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentMode");
		return ptr;
	}



	void Server_RequestMoreActorInAttackPool();
	void OnTormentModeStop_Cosmetic();
	void OnTormentModeStart_Cosmetic();
	void OnTormentModeChargeEmpty();
	bool IsInTormentMode();
};

// Class TheExecutioner.TormentModeCooldownInteraction
// 0x0080 (FullSize[0x0630] - InheritedSize[0x05B0])
class UTormentModeCooldownInteraction : public UInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _tormentModeCooldownTime;                                  // 0x05B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeCancelWalkSpeed;                               // 0x05D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _normalWalkSpeed;                                          // 0x0600(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7Z4I[0x8];                                     // 0x0628(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentModeCooldownInteraction");
		return ptr;
	}



};

// Class TheExecutioner.Tormentor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTormentor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.Tormentor");
		return ptr;
	}



	struct FVector GetTormentTrailSpawnPoint();
	struct FVector GetTormentTrailAttackSpawnPoint();
};

// Class TheExecutioner.TormentTrailController
// 0x0128 (FullSize[0x03B0] - InheritedSize[0x0288])
class ATormentTrailController : public ATrailControllerBase
{
public:
	struct FReplicatedTrailPointList                   _trailPointList;                                           // 0x0288(0x0120) (Net, NativeAccessSpecifierPrivate)
	class AMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                               // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentTrailController");
		return ptr;
	}



	void Server_SpawnTormentTrailPoint(class ATormentTrailPoint* TrailPoint, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
};

// Class TheExecutioner.TormentTrailPoint
// 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
class ATormentTrailPoint : public ABaseTormentTrailPoint
{
public:
	unsigned char                                      UnknownData_MZDD[0x18];                                    // 0x0330(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _splineMeshOverlapDistance;                                // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CIT9[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentTrailPoint");
		return ptr;
	}



	void Server_RemoveTrailPoint();
	void RefreshTrailPointCosmetic(TheExecutioner_ETrailPointRefreshReason trailPointRefreshReason);
	void OnAcquireChanged(bool acquired);
	void Multicast_TriggerTrailPointDisappear();
	void GetTrailLocationAndTangeant(int indexInTrail, class USplineComponent* SplineComponent, struct FVector* outStartLocation, struct FVector* outStartTangent, struct FVector* outEndLocation, struct FVector* outEndTangent);
	void AddTrailCosmetic(class USplineComponent* SplineComponent, unsigned char indexInTrail);
	void ActivateCosmetic(bool value);
};

// Class TheExecutioner.TormentTrailPointCollectionComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UTormentTrailPointCollectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SA5E[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxNumberOfTrailPointInGame;                              // 0x00D0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J7L7[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentTrailPointCollectionComponent");
		return ptr;
	}



	void OnTrailAcquireChanged(class ATormentTrailPoint* TrailPoint, bool value);
};

// Class TheExecutioner.TormentTrailSpawnerComponent
// 0x0190 (FullSize[0x0248] - InheritedSize[0x00B8])
class UTormentTrailSpawnerComponent : public UActorComponent
{
public:
	class ATormentTrailController*                     _currentTrailController;                                   // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToHooks;                                  // 0x00C0(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToGenerators;                             // 0x00E8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToExitSwitch;                             // 0x0110(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxSlopeAngleForTrail;                                    // 0x0138(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minSlopeAngleForTrail;                                    // 0x0160(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToHatch;                                  // 0x0188(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionMaxVerticalDistance;                           // 0x01B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                     // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;           // 0x01E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                               // 0x01E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentRestrictedTrailControllerPool;                     // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RLB4[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              _actorsInRange;                                            // 0x0210(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _slopeDetectionOverGroundVector;                           // 0x0220(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _slopeDetectionEndVector;                                  // 0x022C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _forwardMultiplierSlopeDetection;                          // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _epsilonToAddToSpawnLocationInZ;                           // 0x023C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XWLT[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TormentTrailSpawnerComponent");
		return ptr;
	}



	void Sever_SpawnTrailController(class ATormentTrailController* trailController, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation);
	void Server_StopTrailController(class ATormentTrailController* trailController);
	void Server_RequestMoreActorInPool(TheExecutioner_ETrailType trailType);
	void OnLevelReadyToPlay();
	void OnInRangeChanged(bool InRange, class AActor* Actor);
};

// Class TheExecutioner.TrailEffectLastingTimeBaseAddon
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _trailEffectLastingTimeModifierValue;                      // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9PA4[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TrailEffectLastingTimeBaseAddon");
		return ptr;
	}



};

// Class TheExecutioner.TrailOfTorment
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class UTrailOfTorment : public UPerk
{
public:
	unsigned char                                      UnknownData_RTMB[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _cooldownDuration[0x3];                                    // 0x03E8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _highlightPriority;                                        // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActivated;                                          // 0x03F8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SQ3H[0x7];                                     // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGenerator*                                  _highlightedGenerator;                                     // 0x0400(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                               _statusEffect;                                             // 0x0408(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TrailOfTorment");
		return ptr;
	}



	void OnRep_HighlightGenerator(class AGenerator* _oldHighlightedGenerator);
};

// Class TheExecutioner.TrailPointOutlineUpdateStrategy
// 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:
	struct FDBDTunableRowHandle                        _tormentTrailRevealDistance;                               // 0x0130(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheExecutioner.TrailPointOutlineUpdateStrategy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
