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

// Class TheDemogorgon.DemogorgonHuskAnimInstance
// 0x0080 (FullSize[0x02F0] - InheritedSize[0x0270])
class UDemogorgonHuskAnimInstance : public UAnimInstance
{
public:
	float                                              _teleportDuration;                                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _teleportExitPlayRate;                                     // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSlowerExit;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RTMD[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _huskPortalSlowerExit;                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _huskPortalExit;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _demogorgonPortalExit;                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _demogorgonPortalEntry;                                    // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APawn*                                       _owningPawn;                                               // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UPortalPlacerStateComponent>  _demogorgonPortalPlacerState;                              // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2TE0[0x40];                                    // 0x02B0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonHuskAnimInstance");
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheDemogorgon.DemogorgonPounceAttack
// 0x0070 (FullSize[0x03D0] - InheritedSize[0x0360])
class UDemogorgonPounceAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_GYU2[0x70];                                    // 0x0360(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttack");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackMissSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceInteraction
// 0x00B8 (FullSize[0x0790] - InheritedSize[0x06D8])
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_C1EY[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_6FN3[0x68];                                    // 0x06E0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargedAttackStateComponent*                _chargedAttackState;                                       // 0x0748(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASlasherPlayer*                              _owningSlasher;                                            // 0x0750(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JLW1[0x38];                                    // 0x0758(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPounceInteraction");
		return ptr;
	}



	void TriggerHuntingAudioEvent(bool isHunting);
	void TriggerChargeCancelAudioEvent();
	void OnChargedAttackReadyChanged(bool Ready);
	void OnCancelCooldownComplete();
};

// Class TheDemogorgon.DemogorgonPowerItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.DemogorgonPowerItemProgressComponent");
		return ptr;
	}



};

// Class TheDemogorgon.ElevensSodaAddon
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
class UElevensSodaAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_CZJ8[0x18];                                    // 0x0298(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.ElevensSodaAddon");
		return ptr;
	}



	void Multicast_UnhighlightGenerator(class AGenerator* Generator);
	void Multicast_HighlightGenerator(class AGenerator* Generator);
};

// Class TheDemogorgon.PortalSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_LFG5[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isDestroyingPortal;                                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpooked;                                                // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0532(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MR0X[0xD];                                     // 0x0533(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDemogorgon.PortalSurvivorSubAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
