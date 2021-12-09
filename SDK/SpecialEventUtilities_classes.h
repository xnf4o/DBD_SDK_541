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

// Class SpecialEventUtilities.RespawnableInteractable
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
class ARespawnableInteractable : public AInteractable
{
public:
	struct FScriptMulticastDelegate                    OnInteractionEnded;                                        // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsInteractingChanged;                                    // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               _isHidden;                                                 // 0x0348(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CNE8[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableInteractable");
		return ptr;
	}



	void OnUnhidden();
	void OnRep_IsHidden();
	void OnHidden();
	bool IsHidden();
};

// Class SpecialEventUtilities.RespawningEventComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class URespawningEventComponent : public UActorComponent
{
public:
	class URespawnableStrategy*                        _respawnableStrategy;                                      // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URespawnablePositioner*                      _respawnablePositioner;                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawningEventComponent");
		return ptr;
	}



	void DBD_ForceRespawnSpecialEventObject();
	void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting);
};

// Class SpecialEventUtilities.RespawnableTrigger
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class URespawnableTrigger : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableTrigger");
		return ptr;
	}



};

// Class SpecialEventUtilities.InteractionRespawnableTrigger
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UInteractionRespawnableTrigger : public URespawnableTrigger
{
public:
	class URespawningEventComponent*                   _respawningEventComponent;                                 // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.InteractionRespawnableTrigger");
		return ptr;
	}



	void Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable);
	void Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable);
};

// Class SpecialEventUtilities.RespawnablePositioner
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class URespawnablePositioner : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnIsInteractingWithAnyRespawnableInteractableChangedEvent; // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class ARespawnableInteractable*>            _respawnableInteractables;                                 // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7Z83[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnablePositioner");
		return ptr;
	}



	void Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting);
	TArray<class ARespawnableInteractable*> Authority_GetRespawnables();
};

// Class SpecialEventUtilities.RespawnableStrategy
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class URespawnableStrategy : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnableStrategy");
		return ptr;
	}



};

// Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class URespawnFurthestFromPlayersStrategy : public URespawnableStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy");
		return ptr;
	}



};

// Class SpecialEventUtilities.RespawningEventUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class URespawningEventUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.RespawningEventUtilities");
		return ptr;
	}



};

// Class SpecialEventUtilities.TimedRespawnableTrigger
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UTimedRespawnableTrigger : public URespawnableTrigger
{
public:
	class URespawningEventComponent*                   _respawningEventComponent;                                 // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J7DH[0x40];                                    // 0x00C0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpecialEventUtilities.TimedRespawnableTrigger");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
