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

// Class TheTrapper.Addon_Beartrap_05
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UAddon_Beartrap_05 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.Addon_Beartrap_05");
		return ptr;
	}



};

// Class TheTrapper.Addon_Beartrap_DisarmRevealer
// 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
class UAddon_Beartrap_DisarmRevealer : public UItemAddon
{
public:
	struct FName                                       _auraRevealStatusEffectID;                                 // 0x0298(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _auraRevealDuration;                                       // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ABearTrap*, class ACamperPlayer*>       _disarmedTrapMap;                                          // 0x02A8(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.Addon_Beartrap_DisarmRevealer");
		return ptr;
	}



};

// Class TheTrapper.BearTrap
// 0x0120 (FullSize[0x05F0] - InheritedSize[0x04D0])
class ABearTrap : public ABaseTrap
{
public:
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                        // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsulePlayerOverlapComponent*              _trapPlayerDetectionZone;                                  // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               _killerSafetyZoneComponent;                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x04E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBearTrapOutlineUpdateStrategy*              _outlineUpdateStrategy;                                    // 0x04F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapActorComponent*                          _mapActorComponent;                                        // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _mapActorCollision;                                        // 0x0500(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _trapBlocker;                                              // 0x0508(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onIsTrapSetChanged;                                       // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class ADBDPlayer*                                  _ownerPlayer;                                              // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDNavModifierComponent*                    _dangerNavModifierComponent;                               // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isTrapperOutOfSafetyZone;                                 // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_37U9[0x3];                                     // 0x0539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _maximumAttemptsForSelfUntrap;                             // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _selfUntrapAttemptsRemaining;                              // 0x0540(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1058[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractor*                                 _mainInteractor;                                           // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                      _trapSurvivor;                                             // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                      _trapKiller;                                               // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _trappedPlayer;                                            // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YQP8[0x60];                                    // 0x0568(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationMontageSlave*                      _animationMontageSlave;                                    // 0x05C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UBF4[0x20];                                    // 0x05D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.BearTrap");
		return ptr;
	}



	void TrySetTrappedPlayer(class ADBDPlayer* Player);
	void SetTrappedPlayerSinceMoved(bool didTrap);
	void SetTrappedPlayer(class ADBDPlayer* trappedPlayer);
	void PlayMontage(class UAnimMontage* Montage);
	void OnTrappedPlayerPickedUp(class ADBDPlayer* picker);
	void OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSlasherSet(class ASlasherPlayer* Slasher);
	void OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnLevelReadyToPlay_Implementation();
	void OnCollectUpdateStart();
	void OnCollectUpdateEnd();
	bool IsTrapperOutOfSafetyZone();
	void InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction);
	void InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction);
	void InitializeMainInteractor(class UInteractor* Interactor);
	bool HasTrappedPlayerSinceMoved();
	bool HasTrappedPlayer();
	class ADBDPlayer* GetTrappedPlayer();
	class UBearTrapAnimInstance* GetAnimInstance();
	class UAkComponent* GetAkAudioComponent();
	void Cosmetic_OnPlayerTrapped(class ADBDPlayer* trappedPlayer);
};

// Class TheTrapper.BearTrapAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UBearTrapAnimInstance : public USleepingAnimInstance
{
public:
	bool                                               _isBroken;                                                 // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingCollected;                                         // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _containsSurvivor;                                         // 0x0282(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isTrapSet;                                                // 0x0283(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasJustDisarmed;                                          // 0x0284(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y9CI[0xB];                                     // 0x0285(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.BearTrapAnimInstance");
		return ptr;
	}



	void SetWasJustDisarmed(bool wasJustDisarmed);
	void SetIsTrapSet(bool IsTrapSet);
	void SetIsBeingCollected(bool isBeingCollected);
	void SetContainsSurvivor(bool containsSurvivor);
};

// Class TheTrapper.BearTrapKillerComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBearTrapKillerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.BearTrapKillerComponent");
		return ptr;
	}



	void Server_TryDisarmTrap(class ABearTrap* trapToDisarm);
	void Multicast_DisarmTrap(class ABearTrap* trapToDisarm);
};

// Class TheTrapper.DisarmBearTrapInteraction
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_YDCV[0x4];                                     // 0x06D8(0x0004) Fix Super Size
	float                                              _averageMaxVelocitySquared;                                // 0x06DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _updateMontageID;                                          // 0x06E0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _loudNoiseAudibleRangeTunable;                             // 0x06EC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9RXV[0x8];                                     // 0x06F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.DisarmBearTrapInteraction");
		return ptr;
	}



};

// Class TheTrapper.IridescentStone
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UIridescentStone : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.IridescentStone");
		return ptr;
	}



};

// Class TheTrapper.ResetBearTrapInteraction
// 0x0088 (FullSize[0x0760] - InheritedSize[0x06D8])
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
{
public:
	struct FName                                       _enterMontageIDForBeartrap;                                // 0x06D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _udpateMontageIDForBeartrap;                               // 0x06E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _updateSequenceForBeartrap;                                // 0x06F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _exitMontageForIDBeartrap;                                 // 0x06F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _cancelExitMontage;                                        // 0x0704(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9UIJ[0x50];                                    // 0x0710(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.ResetBearTrapInteraction");
		return ptr;
	}



};

// Class TheTrapper.SelfUntrap
// 0x00B8 (FullSize[0x0790] - InheritedSize[0x06D8])
class USelfUntrap : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _trapImmunityDuration;                                     // 0x06D8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _untrapMontage;                                            // 0x0700(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeHealthy;                                  // 0x0708(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeInjured;                                  // 0x0728(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeCrawling;                                 // 0x0748(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _failedEscape;                                             // 0x0768(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6OM6[0x1];                                     // 0x0788(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _canEscape;                                                // 0x0789(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KVZJ[0x6];                                     // 0x078A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.SelfUntrap");
		return ptr;
	}



};

// Class TheTrapper.SetBearTrap
// 0x0058 (FullSize[0x0790] - InheritedSize[0x0738])
class USetBearTrap : public USetTrapInteraction
{
public:
	struct FName                                       _enterMontageIDForBeartrap;                                // 0x0738(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _udpateMontageIDForBeartrap;                               // 0x0744(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _updateSequenceForBeartrap;                                // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _exitMontageForIDBeartrap;                                 // 0x0758(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _cancelExitMontage;                                        // 0x0764(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5BO4[0x20];                                    // 0x0770(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.SetBearTrap");
		return ptr;
	}



};

// Class TheTrapper.SlashedOutOfBearTrapInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{
public:
	TArray<struct FString>                             _overridableInteractions;                                  // 0x05B0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _updateMontage;                                            // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V192[0x8];                                     // 0x05C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.SlashedOutOfBearTrapInteraction");
		return ptr;
	}



};

// Class TheTrapper.TrapCamperInteraction
// 0x0090 (FullSize[0x0640] - InheritedSize[0x05B0])
class UTrapCamperInteraction : public UInteractionDefinition
{
public:
	TArray<struct FString>                             _nonOverridableInteractions;                               // 0x05B0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _trapAttachSocket;                                         // 0x05C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _updateMontageID;                                          // 0x05CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _updateNoScreamMontageID;                                  // 0x05D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JHXJ[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _loudNoiseRangeTunable;                                    // 0x05E8(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hemorrhageEffectDurationTunable;                          // 0x0610(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BN5B[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.TrapCamperInteraction");
		return ptr;
	}



};

// Class TheTrapper.TrapKillerInteraction
// 0x0070 (FullSize[0x0620] - InheritedSize[0x05B0])
class UTrapKillerInteraction : public UInteractionDefinition
{
public:
	TArray<struct FString>                             _overridableInteractions;                                  // 0x05B0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    _caughtFootRotationOffset;                                 // 0x05C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FName                                       _openNotifyID;                                             // 0x05CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _footSocketName;                                           // 0x05D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K4L0[0x3C];                                    // 0x05E4(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.TrapKillerInteraction");
		return ptr;
	}



};

// Class TheTrapper.TrapperAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UTrapperAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_4YEL[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.TrapperAnimInstance");
		return ptr;
	}



};

// Class TheTrapper.Untrap
// 0x0038 (FullSize[0x0710] - InheritedSize[0x06D8])
class UUntrap : public UChargeableInteractionDefinition
{
public:
	TArray<struct FString>                             _overridableInteractions;                                  // 0x06D8(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _bearTrapUpdateMontageID;                                  // 0x06E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _bearTrapFinishMontageID;                                  // 0x06F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LFNN[0x10];                                    // 0x0700(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTrapper.Untrap");
		return ptr;
	}



	class ABearTrap* GetTrap();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
