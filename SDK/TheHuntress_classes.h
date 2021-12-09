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

// Class TheHuntress.DeadHard
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class UDeadHard : public UPerk
{
public:
	float                                              _deadHardIconCooldownDuration;                             // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KXF6[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exhaustedCooldownPerLevel[0x3];                           // 0x03E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LV4H[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.DeadHard");
		return ptr;
	}



};

// Class TheHuntress.DeadHardDashInteraction
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class UDeadHardDashInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData_50TH[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.DeadHardDashInteraction");
		return ptr;
	}



};

// Class TheHuntress.DeadHardEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UDeadHardEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.DeadHardEffect");
		return ptr;
	}



};

// Class TheHuntress.HatchetCooldown
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class UHatchetCooldown : public UInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.HatchetCooldown");
		return ptr;
	}



};

// Class TheHuntress.HatchetLauncher
// 0x0120 (FullSize[0x02A0] - InheritedSize[0x0180])
class UHatchetLauncher : public UKillerProjectileLauncher
{
public:
	struct FRotator                                    _angleOffset;                                              // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KD6B[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _angleOffsetCurve;                                         // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _speedCurve;                                               // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _hatchetSpeedWhenThrowFullyCharged;                        // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WYXG[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _hatchetPitchCurve;                                        // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMinAngleOffset;                                    // 0x01B0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMaxAngleOffset;                                    // 0x01D8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMinSpeed;                                          // 0x0200(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMaxSpeed;                                          // 0x0228(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetLaunchPitchMin;                                    // 0x0250(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetLaunchPitchMax;                                    // 0x0278(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.HatchetLauncher");
		return ptr;
	}



	bool IsLaunchedHatchetFullyCharged();
};

// Class TheHuntress.HatchetProjectile
// 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
class AHatchetProjectile : public AKillerProjectile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.HatchetProjectile");
		return ptr;
	}



};

// Class TheHuntress.HatchetRack
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class AHatchetRack : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.HatchetRack");
		return ptr;
	}



	void SetMovableHatchetVisibility(bool visible);
};

// Class TheHuntress.HatchetThrow
// 0x0028 (FullSize[0x0710] - InheritedSize[0x06E8])
class UHatchetThrow : public UThrowInteraction
{
public:
	struct FDBDTunableRowHandle                        _hatchetThrowCancellationCooldown;                         // 0x06E8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.HatchetThrow");
		return ptr;
	}



	class ATheHuntressPower* GetOwningHatchetSpawner();
};

// Class TheHuntress.ReloadHatchet
// 0x0008 (FullSize[0x05C0] - InheritedSize[0x05B8])
class UReloadHatchet : public UBaseLockerInteraction
{
public:
	unsigned char                                      UnknownData_MQPF[0x8];                                     // 0x05B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.ReloadHatchet");
		return ptr;
	}



	bool IsInteractionPossible_Shared(class ADBDPlayer* Player);
};

// Class TheHuntress.TheHuntressPower
// 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
class ATheHuntressPower : public ACollectable
{
public:
	unsigned char                                      UnknownData_EMFB[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHuntress.TheHuntressPower");
		return ptr;
	}



	void StartHatchetShineCosmetic();
	void SetPercentThrowStrength(float percentStrength);
	void SetHatchetVisible(bool visible);
	void PrintDebugThrowInfo();
	bool IsHatchetThrowFullyCharged();
	bool HasHatchet();
	class ASlasherPlayer* GetOwningKiller();
	class UBaseProjectileLauncher* GetHatchetProjectileLauncher();
	class UHatchetCooldown* GetHatchetCooldown();
	class UAkComponent* GetAkAudioHatchetSpawner();
	void Cosmetic_OnThrowInteractionStart();
	void Cosmetic_OnThrowInteractionCancelled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
