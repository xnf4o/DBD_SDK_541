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

// Function Halloween2021.Pumpkin.OnInteractionCompleted
struct APumpkin_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting
struct APumpkin_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting
struct APumpkin_Cosmetic_OnStartedInteracting_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted
struct APumpkin_Cosmetic_OnIntroCompleted_Params
{
};

// Function Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted
struct APumpkin_Cosmetic_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
