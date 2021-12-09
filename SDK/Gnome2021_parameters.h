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

// Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
struct AGnome_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
struct AGnome_Cosmetic_OnStartedInteracting_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
struct AGnome_Cosmetic_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
struct UGnomeEventComponent_Authority_OnEndGameStarted_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
