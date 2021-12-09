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

// Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
struct UBlightedSerumAddon_OnRep_DashInteraction_Params
{
};

// Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
struct UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Params
{
};

// Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
struct UBlightedSerumCollisionInteraction_SetCooldownInteraction_Params
{
	class UBlightedSerumCooldownInteraction*           cooldownInteraction;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
struct UBlightedSerumDashInteraction_SetCooldownInteraction_Params
{
	class UBlightedSerumCooldownInteraction*           cooldownInteraction;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
struct UBlightedSerumDashInteraction_SetCollisionInteraction_Params
{
	class UBlightedSerumCollisionInteraction*          collisionInteraction;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
struct AToxinPlantInteractable_SetToxinPlantComplete_Params
{
	bool                                               IsComplete;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
struct AToxinPlantInteractable_OnToxinPlantComplete_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
struct AToxinPlantInteractable_OnSalvageInteractionStart_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
struct AToxinPlantInteractable_OnSalvageInteractionFinished_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
struct AToxinPlantInteractable_IsToxinPlantComplete_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
