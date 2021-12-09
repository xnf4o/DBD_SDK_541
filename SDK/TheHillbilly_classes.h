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

// Class TheHillbilly.ChainsawAnalyticsBaseComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UChainsawAnalyticsBaseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DJAH[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _maxDistanceFromHookToBeConsideredCamping;                 // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JRFX[0x2C];                                    // 0x00D4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.ChainsawAnalyticsBaseComponent");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttack
// 0x0070 (FullSize[0x03D0] - InheritedSize[0x0360])
class UHillbillyChainsawAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_MJ6E[0x58];                                    // 0x0360(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _chainsawHitGameEventTag;                                  // 0x03B8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                                _chainsawAttemptGameEventTag;                              // 0x03C4(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttack");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttackOpenSubstate
// 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
class UHillbillyChainsawAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_94WM[0x38];                                    // 0x0130(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackOpenSubstate");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UHillbillyChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackHittingSubstate");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UHillbillyChainsawAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UHillbillyChainsawAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackMissSubstate");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UHillbillyChainsawAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawAttackObstructSubstate");
		return ptr;
	}



};

// Class TheHillbilly.ChainsawRevInteraction
// 0x0068 (FullSize[0x0740] - InheritedSize[0x06D8])
class UChainsawRevInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_63TC[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_TYQ3[0x28];                                    // 0x06E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _soundCueDistanceDataID;                                   // 0x0708(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V72Z[0x4];                                     // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               _chainsawRevStartAkAudioEvent;                             // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _chainsawRevEndAkAudioEvent;                               // 0x0720(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASlasherPlayer*                              _owningSlasher;                                            // 0x0728(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_74GV[0x10];                                    // 0x0730(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.ChainsawRevInteraction");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class TheHillbilly.ApexMufflerAddon
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UApexMufflerAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.ApexMufflerAddon");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyAnalyticsComponent
// 0x0080 (FullSize[0x0180] - InheritedSize[0x0100])
class UHillbillyAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{
public:
	unsigned char                                      UnknownData_KFR4[0x80];                                    // 0x0100(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyAnalyticsComponent");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UHillbillyAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_DEW3[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyAnimInstance");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawHitEventAddon
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UHillbillyChainsawHitEventAddon : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawHitEventAddon");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawOverheatComponent
// 0x0460 (FullSize[0x0518] - InheritedSize[0x00B8])
class UHillbillyChainsawOverheatComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnHeatChargeUpdateDelegate;                                // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VL2U[0x118];                                   // 0x00C8(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isChainsawOverheating;                                    // 0x01E0(0x0030) (Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _chainsawHeatCharge;                                       // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _heatMaxCharge;                                            // 0x0218(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _heatRevStartAmount;                                       // 0x0298(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _heatRevChargeRate;                                        // 0x0318(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _heatDashChargeRate;                                       // 0x0398(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _heatDischargeRate;                                        // 0x0418(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _overheatDischargeRate;                                    // 0x0498(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawOverheatComponent");
		return ptr;
	}



	void OnRep_IsChainsawOverheating();
	void OnLevelReadyToPlay();
	void OnHeatChargeUpdate(float currentCharge, float previosCharge);
	bool IsChainsawOverheating();
	void Authority_OnHeatChargeFull();
	void Authority_OnHeatChargeEmpty();
};

// Class TheHillbilly.HillbillyChainsawRevInteraction
// 0x0050 (FullSize[0x0790] - InheritedSize[0x0740])
class UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
{
public:
	unsigned char                                      UnknownData_4FGB[0x50];                                    // 0x0740(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawRevInteraction");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyChainsawSubAnimInstance
// 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
public:
	unsigned char                                      UnknownData_W73Z[0x20];                                    // 0x05C0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyChainsawSubAnimInstance");
		return ptr;
	}



};

// Class TheHillbilly.HillbillyOverheatPresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UHillbillyOverheatPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UHillbillyChainsawOverheatComponent*         _hillbillyChainsawOverheatComponent;                       // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.HillbillyOverheatPresentationItemProgressComponent");
		return ptr;
	}



	void SetHillbillyChainsawOverheatComponent(class UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent);
};

// Class TheHillbilly.IridescentBrickAddon
// 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
class UIridescentBrickAddon : public UOnEventBaseAddon
{
public:
	unsigned char                                      UnknownData_T3ZA[0x28];                                    // 0x02A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _undetectableStatusEffect;                                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.IridescentBrickAddon");
		return ptr;
	}



};

// Class TheHillbilly.LightbornAuraRevealEffect
// 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
class ULightbornAuraRevealEffect : public UBaseLingeringStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.LightbornAuraRevealEffect");
		return ptr;
	}



};

// Class TheHillbilly.LightbornBlindFailedIndicatorCondition
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
class ULightbornBlindFailedIndicatorCondition : public UEventDrivenModifierCondition
{
public:
	float                                              _conditionReevaluationTimerDurationAfterFailedBlind;       // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _replicatedIsTrue;                                         // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NOJM[0x5B];                                    // 0x00ED(0x005B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.LightbornBlindFailedIndicatorCondition");
		return ptr;
	}



	void OnRep_ReplicatedIsTrue();
};

// Class TheHillbilly.LoProChainsAddon
// 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
class ULoProChainsAddon : public UItemAddon
{
public:
	struct FAnimationMontageDescriptor                 _breakPalletMontage;                                       // 0x0298(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              _halfDamageDurationAfterBreakable;                         // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _doesAddonIncludeBreakableWalls;                           // 0x02BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TH5Y[0x33];                                    // 0x02BD(0x0033) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHillbilly.LoProChainsAddon");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
