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

// Class Anniversary.CrownPickupInteraction
// 0x0048 (FullSize[0x0720] - InheritedSize[0x06D8])
class UCrownPickupInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_9USQ[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_O6JE[0x28];                                    // 0x06E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _attachToSocketName;                                       // 0x0708(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractionChargeComplete;                              // 0x0714(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NKCF[0xB];                                     // 0x0715(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Anniversary.CrownPickupInteraction");
		return ptr;
	}



};

// Class Anniversary.CrownPillarInteractable
// 0x00C8 (FullSize[0x0418] - InheritedSize[0x0350])
class ACrownPillarInteractable : public ARespawnableInteractable
{
public:
	struct FDBDTunableRowHandle                        _crownPillarInteractionSecondsToCharge;                    // 0x0350(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _crownPillarInteractionSecondsToChargeKiller;              // 0x0378(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _offeringEnabledAuraVisibilityDistance;                    // 0x03A0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrownPickupInteraction*                     _crownPillarInteraction;                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPickupInteraction*                     _crownPillarInteractionKiller;                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _crownPillarInteractionChargeable;                         // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _crownPillarInteractionChargeableKiller;                   // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractor*                                 _crownPillarInteractor;                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _crownPillarInteractionZone;                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _crownPillarStaticMesh;                                    // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPillarOutlineUpdateStrategy*           _crownPillarOutlineUpdateStrategy;                         // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Anniversary.CrownPillarInteractable");
		return ptr;
	}



	void Local_OnIntroCompleted();
	bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering();
	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
	void Cosmetic_OnInteractionCancelled();
};

// Class Anniversary.CrownPillarOutlineUpdateStrategy
// 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _offeringEnabledAuraColor;                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Anniversary.CrownPillarOutlineUpdateStrategy");
		return ptr;
	}



};

// Class Anniversary.CrownPlayerComponent
// 0x0060 (FullSize[0x0270] - InheritedSize[0x0210])
class UCrownPlayerComponent : public USceneComponent
{
public:
	bool                                               _hasInteractedWithCrownPillarThisGame;                     // 0x0210(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I9E0[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isCrownEventActive;                                       // 0x0218(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T5NY[0x28];                                    // 0x0248(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Anniversary.CrownPlayerComponent");
		return ptr;
	}



	void OnRep_hasInteractedWithCrownPillarThisGame();
	void Cosmetic_OnInteractedWithCrownPillar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
