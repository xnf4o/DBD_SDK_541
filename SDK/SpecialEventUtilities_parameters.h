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
// Parameters
//---------------------------------------------------------------------------

// Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden
struct ARespawnableInteractable_OnUnhidden_Params
{
};

// Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden
struct ARespawnableInteractable_OnRep_IsHidden_Params
{
};

// Function SpecialEventUtilities.RespawnableInteractable.OnHidden
struct ARespawnableInteractable_OnHidden_Params
{
};

// Function SpecialEventUtilities.RespawnableInteractable.IsHidden
struct ARespawnableInteractable_IsHidden_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
struct URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params
{
};

// Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
struct URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params
{
	class ARespawnableInteractable*                    RespawnableInteractable;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInteracting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
struct UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params
{
	class ARespawnableInteractable*                    newRespawnableInteractable;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
struct UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params
{
	class ARespawnableInteractable*                    RespawnableInteractable;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
struct URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params
{
	class ARespawnableInteractable*                    RespawnableInteractable;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInteracting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
struct URespawnablePositioner_Authority_GetRespawnables_Params
{
	TArray<class ARespawnableInteractable*>            ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
