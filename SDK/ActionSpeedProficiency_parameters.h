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

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
struct UActionSpeedProficiency_C_FetchInteractingPlayers_Params
{
	class UInteractionDefinition*                      Chargeable_Interaction;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                                  Interacting_Player;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ADBDPlayer*>                          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
struct UActionSpeedProficiency_C_Compute_Overall_speed_including_multiple_interactors_Params
{
	class UChargeableInteractionDefinition*            Chargeable_Interaction;                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                                  Interacting_Player;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
struct UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params
{
	class UChargeableInteractionDefinition*            Chargeable_Interaction;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
struct UActionSpeedProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
