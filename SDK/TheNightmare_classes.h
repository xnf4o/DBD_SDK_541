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

// Class TheNightmare.BlackBox
// 0x0040 (FullSize[0x02D8] - InheritedSize[0x0298])
class UBlackBox : public UItemAddon
{
public:
	struct FDBDTunableRowHandle                        _blockDuration;                                            // 0x0298(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1B0Z[0x18];                                    // 0x02C0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.BlackBox");
		return ptr;
	}



};

// Class TheNightmare.DreamInducerComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UDreamInducerComponent : public UActorComponent
{
public:
	class UClass*                                      _generatorDreamworldClass;                                 // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.DreamInducerComponent");
		return ptr;
	}



	void Authority_OnLevelReadyToPlay();
};

// Class TheNightmare.DreamSnare
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ADreamSnare : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.DreamSnare");
		return ptr;
	}



};

// Class TheNightmare.GeneratorDreamworldComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UGeneratorDreamworldComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CWZ5[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               _beamSocketsForBloodEffect;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.GeneratorDreamworldComponent");
		return ptr;
	}



	void OnRepairSkillCheckFailed(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, DBDSharedTypes_ESkillCheckCustomType Type, float ChargeChange);
	void Cosmetic_OnPlayerFailSkillCheck(class ADBDPlayer* Player);
};

// Class TheNightmare.GeneratorTeleportInteraction
// 0x00C8 (FullSize[0x07A0] - InheritedSize[0x06D8])
class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_OYOY[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	class UTimerObject*                                _teleportCooldownTimer;                                    // 0x06E0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JWLK[0x40];                                    // 0x06E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGenerator*                                  _selectedGenerator;                                        // 0x0728(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGenerator*                                  _locallySelectedGenerator;                                 // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DK7J[0x8];                                     // 0x0738(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  _selectedTeleportLocation;                                 // 0x0740(0x0030) (BlueprintVisible, Net, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               _isInteractionOngoing;                                     // 0x0770(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _teleportFailed;                                           // 0x0771(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZESI[0x2];                                     // 0x0772(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _bloodSpurtInterval;                                       // 0x0774(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleHalfHeight;                          // 0x0778(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleRadius;                              // 0x077C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _collisionCheckLocationOffset;                             // 0x0780(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _capsuleTraceAngleIncrement;                               // 0x078C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorTeleportMaxAngle;                                // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _downRaycastLength;                                        // 0x0794(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BUGJ[0x8];                                     // 0x0798(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.GeneratorTeleportInteraction");
		return ptr;
	}



	void StopBloodSpurts();
	void StartBloodSpurts();
	void ShowBloodSpurtsVFX();
	void Server_SetSelectedGenerator(class AGenerator* Generator);
	void OnTeleportReady();
	void OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
	void OnTeleported(const struct FTransform& transformBeforeTeleport);
	void OnSelectedGeneratorSet(class AGenerator* selectedGenerator);
	void OnRep_TeleportCooldownTimer();
	void OnRep_SelectedGenerator();
	void OnLocallySelectedGeneratorSet(class AGenerator* selectedGenerator);
	void OnIntroCompleted();
	void OnBloodSpurts();
	void Multicast_TeleportPlayer(const struct FVector& Location, const struct FRotator& Rotation);
	void Multicast_OnTeleportLocationChosen(class AGenerator* Generator, const struct FTransform& Location);
	bool IsTeleportAvailable();
	void InitializeTunableValues(class ASlasherPlayer* killer);
	class ADBDPlayer* GetOwningPlayer();
	class AGenerator* GetInlineGenerator(class ADBDPlayer* Player);
	bool CanTeleportAtGenerator(class AGenerator* Generator);
	bool Authority_TeleportPlayerToGenerator(class ADBDPlayer* playerToTeleport, class AGenerator* Generator);
	void Authority_StartTeleportCooldown(bool teleported);
};

// Class TheNightmare.InDreamSurvivorSubAnimInstance
// 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _shouldLookSleepy;                                         // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VWM5[0x1F];                                    // 0x04F1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.InDreamSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.NightmareAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNightmareAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_1R37[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.NightmareAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.PlaceDreamPalletInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class UPlaceDreamPalletInteraction : public UInteractionDefinition
{
public:
	TArray<class APalletTracker*>                      _palletTrackers;                                           // 0x05B0(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P7WN[0x8];                                     // 0x05C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APalletTracker*                              _closestTracker;                                           // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.PlaceDreamPalletInteraction");
		return ptr;
	}



	void SpawnDreamPallet(class APalletTracker* trackerAtLocation);
	void InitializeTunableValues(class ASlasherPlayer* killer);
	class APalletTracker* GetTargetedPallet();
	bool CanSpawnDreamPalletAtTracker(class APalletTracker* tracker);
};

// Class TheNightmare.PresentationGeneratorTeleportProgressComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData_0T65[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.PresentationGeneratorTeleportProgressComponent");
		return ptr;
	}



};

// Class TheNightmare.SetDreamSnareInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_W3QM[0x4];                                     // 0x06D8(0x0004) Fix Super Size
	float                                              MinPlacementDistance;                                      // 0x06DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxPlacementDistance;                                      // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W2S2[0xC];                                     // 0x06E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheNightmare.SetDreamSnareInteraction");
		return ptr;
	}



	bool HasCancelledDreamSnare();
	float GetTrapDistanceFromControlRotation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
