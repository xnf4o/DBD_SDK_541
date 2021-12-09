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

// Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
struct UDemogorgonHuskAnimInstance_OnKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
{
	bool                                               isHunting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
{
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
{
	bool                                               Ready;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
{
};

// Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
struct UElevensSodaAddon_Multicast_UnhighlightGenerator_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
struct UElevensSodaAddon_Multicast_HighlightGenerator_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
