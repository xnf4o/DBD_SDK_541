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

// Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
struct ACrownPillarInteractable_Local_OnIntroCompleted_Params
{
};

// Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
struct ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
struct ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
struct ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
struct ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
struct ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params
{
};

// Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
struct UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params
{
};

// Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar
struct UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
