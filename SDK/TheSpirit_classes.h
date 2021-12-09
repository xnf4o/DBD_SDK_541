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

// Class TheSpirit.Autodidact
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class UAutodidact : public UPerk
{
public:
	int                                                _maxTokenCountPerLevel[0x3];                               // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressionBonusPerToken;                                 // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _initialSkillCheckProgressionPenalty;                      // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PJPK[0xC];                                     // 0x03E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.Autodidact");
		return ptr;
	}



};

// Class TheSpirit.Deliverance
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class UDeliverance : public UPerk
{
public:
	float                                              _brokenEffectDurationPerLevel[0x3];                        // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ARWW[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.Deliverance");
		return ptr;
	}



};

// Class TheSpirit.Diversion
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class UDiversion : public UPerk
{
public:
	unsigned char                                      UnknownData_G4O7[0x58];                                    // 0x03D0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _diversionActivationTimePerLevel[0x3];                     // 0x0428(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _throwPebbleDistance;                                      // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.Diversion");
		return ptr;
	}



	void Authority_OnOwningSurvivorImmobilizedStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
	void Authority_OnOwningSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState);
};

// Class TheSpirit.DriedCherryBlossom
// 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
public:
	unsigned char                                      UnknownData_MFRK[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.DriedCherryBlossom");
		return ptr;
	}



};

// Class TheSpirit.KatsumoriTalisman
// 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
class UKatsumoriTalisman : public UItemAddon
{
public:
	unsigned char                                      UnknownData_WXFX[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _explosionRadius;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _blockDuration;                                            // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3VNM[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.KatsumoriTalisman");
		return ptr;
	}



};

// Class TheSpirit.OwningPlayerInSpiritHuskRange
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_T20A[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.OwningPlayerInSpiritHuskRange");
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheSpirit.Rancor
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class URancor : public UPerk
{
public:
	float                                              _survivorRevealDuration;                                   // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _killerRevealToObsessionDuration[0x3];                     // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JXD2[0x8];                                     // 0x03E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.Rancor");
		return ptr;
	}



	void SpawnBubbleAtSurvivorsLocation();
	float GetSurvivorRevealDuration();
};

// Class TheSpirit.SpiritDynamicAccessoryAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class USpiritDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance
{
public:
	bool                                               _isPassivePhaseWalkHusk;                                   // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P9Y9[0xF];                                     // 0x0281(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritDynamicAccessoryAnimInstance");
		return ptr;
	}



};

// Class TheSpirit.SpiritFury
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class USpiritFury : public UPerk
{
public:
	unsigned char                                      UnknownData_MFZZ[0x4];                                     // 0x03D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _palletToBreakCountPerLevel[0x3];                          // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritFury");
		return ptr;
	}



};

// Class TheSpirit.SpiritHuskAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class USpiritHuskAnimInstance : public UAnimInstance
{
public:
	class USkeletalMeshComponent*                      _killerMesh;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_79MA[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritHuskAnimInstance");
		return ptr;
	}



};

// Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
// 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
{
public:
	float                                              _elapsedTimeSinceFakingRealKillerPose;                     // 0x0280(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _idleAnimationExplicitTime;                                // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXMQ[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _idleAnimationSequence;                                    // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5LB3[0x18];                                    // 0x0298(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance");
		return ptr;
	}



};

// Class TheSpirit.SpiritHuskOutlineUpdateStrategy
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	unsigned char                                      UnknownData_IH88[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritHuskOutlineUpdateStrategy");
		return ptr;
	}



	void OnSlasherSet(class ASlasherPlayer* Slasher);
};

// Class TheSpirit.SpiritPassivePhaseWalkHusk
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
class ASpiritPassivePhaseWalkHusk : public ABaseVFX
{
public:
	class USkeletalMeshComponent*                      _huskMesh;                                                 // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCustomizedSkeletalMesh*                     _huskCustomizedSkeletalMesh;                               // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.SpiritPassivePhaseWalkHusk");
		return ptr;
	}



	void SetScalarParameterOnAllChildrenMeshes(const struct FName& ParameterName, float value);
	void SetPassivePhaseWalkHuskVisibility(bool visible);
	void InitializeSpiritPassivePhaseWalkHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);
	void Cosmetic_StartFadeOutPassivePhaseWalkHusk();
	void Cosmetic_InitializeSpiritPassivePhaseWalkHusk();
	void CaptureSpiritPose();
};

// Class TheSpirit.ThrowRockInteraction
// 0x0070 (FullSize[0x0620] - InheritedSize[0x05B0])
class UThrowRockInteraction : public UInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _loudNoiseAudioRange;                                      // 0x05B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _scratchMarksApplicationDelay;                             // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _scratchMarksCountToSpawn;                                 // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5GXO[0x4];                                     // 0x05E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _diversionHeightOffset;                                    // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MO3U[0x38];                                    // 0x05E8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheSpirit.ThrowRockInteraction");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
