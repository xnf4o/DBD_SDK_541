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

// Function BP_Audio_KLR_23.BP_Audio_KLR_22_C.SelectAudioStatusStartEvent
struct UBP_Audio_KLR_22_C_SelectAudioStatusStartEvent_Params
{
	bool                                               IsInMenu;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_23.BP_Audio_KLR_22_C.ReceiveBeginPlay
struct UBP_Audio_KLR_22_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_23.BP_Audio_KLR_22_C.ReceiveEndPlay
struct UBP_Audio_KLR_22_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_23.BP_Audio_KLR_22_C.ExecuteUbergraph_BP_Audio_KLR_23
struct UBP_Audio_KLR_22_C_ExecuteUbergraph_BP_Audio_KLR_23_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
