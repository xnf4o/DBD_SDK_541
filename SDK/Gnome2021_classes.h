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

// Class Gnome2021.Gnome
// 0x00A0 (FullSize[0x03F0] - InheritedSize[0x0350])
class AGnome : public ARespawnableInteractable
{
public:
	class UGnomeInteraction*                           _gnomeInteraction;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGnomeInteraction*                           _gnomeInteractionKiller;                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _gnomeInteractionChargeable;                               // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _gnomeInteractionChargeableKiller;                         // 0x0368(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractor*                                 _gnomeInteractor;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _gnomeInteractionZone;                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      _gnomeSkeletalMesh;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gnomeInteractionSecondsToCharge;                          // 0x0390(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gnomeInteractionSecondsToChargeKiller;                    // 0x03B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _auraColorWhileInteracting;                                // 0x03E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gnome2021.Gnome");
		return ptr;
	}



	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
};

// Class Gnome2021.GnomeEventComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UGnomeEventComponent : public URespawningEventComponent
{
public:
	class UInteractionRespawnableTrigger*              _interactionRespawnableTrigger;                            // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTimedRespawnableTrigger*                    _timedRespawnableTrigger;                                  // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A14W[0x18];                                    // 0x00D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gnome2021.GnomeEventComponent");
		return ptr;
	}



	void Authority_OnEndGameStarted(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Gnome2021.GnomeInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class UGnomeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_1UB4[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_Z2CZ[0x10];                                    // 0x06E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gnome2021.GnomeInteraction");
		return ptr;
	}



};

// Class Gnome2021.GnomePlayerComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UGnomePlayerComponent : public UActorComponent
{
public:
	bool                                               _hasInteractedWithGnomeThisGame;                           // 0x00B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2NOU[0x27];                                    // 0x00B9(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gnome2021.GnomePlayerComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
