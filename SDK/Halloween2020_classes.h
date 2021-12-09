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

// Class Halloween2020.BlightedSerumAddon
// 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
class UBlightedSerumAddon : public UItemAddon
{
public:
	class UClass*                                      _blightedSerumCollectable;                                 // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumDashInteraction*               _dashInteraction;                                          // 0x02A0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _theBlightExtraTokens;                                     // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numberOfDashesPerEvent;                                   // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UCXW[0x40];                                    // 0x02B0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Halloween2020.BlightedSerumAddon");
		return ptr;
	}



	void OnRep_DashInteraction();
	void OnBlightedDashEnabledVfxSfx();
};

// Class Halloween2020.BlightedSerumCollisionInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class UBlightedSerumCollisionInteraction : public UInteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _bounceTime;                                               // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UPXX[0x14];                                    // 0x05BC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Halloween2020.BlightedSerumCollisionInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
};

// Class Halloween2020.BlightedSerumCooldownInteraction
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class UBlightedSerumCooldownInteraction : public UInteractionDefinition
{
public:
	float                                              _cooldownTime;                                             // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cameraPitchRecenterTime;                                  // 0x05B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1GQW[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Halloween2020.BlightedSerumCooldownInteraction");
		return ptr;
	}



};

// Class Halloween2020.BlightedSerumDashInteraction
// 0x00A0 (FullSize[0x0650] - InheritedSize[0x05B0])
class UBlightedSerumDashInteraction : public UInteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumCollisionInteraction*          _collisionInteraction;                                     // 0x05B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _dashSpeedCurve;                                           // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x05C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x05D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _dashDuration;                                             // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _vectorInterpToSpeed;                                      // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashAccelerationMultiplier;                           // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cameraPitchRecenterTime;                                  // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lookAngleTurnRateModifier;                                // 0x05E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRadius;                                  // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionHeight;                                  // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRange;                                   // 0x05F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2MIG[0x58];                                    // 0x05F8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Halloween2020.BlightedSerumDashInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
	void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
};

// Class Halloween2020.ToxinPlantInteractable
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class AToxinPlantInteractable : public ASpecialBehaviourInteractable
{
public:
	unsigned char                                      UnknownData_EMG3[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Halloween2020.ToxinPlantInteractable");
		return ptr;
	}



	void SetToxinPlantComplete(bool IsComplete);
	void OnToxinPlantComplete();
	void OnSalvageInteractionStart();
	void OnSalvageInteractionFinished();
	bool IsToxinPlantComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
