// Name: DeadB, Version: 5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x04330860
//		Name   -> Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class ADBDMenuPlayer*>                      menuPlayers                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UK24_KillerAudioMenuReaction_C::LobbyKillerReactionSpecificSurvivorSFX(TArray<class ADBDMenuPlayer*> menuPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX");

	UK24_KillerAudioMenuReaction_C_LobbyKillerReactionSpecificSurvivorSFX_Params params {};
	params.menuPlayers = menuPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UK24_KillerAudioMenuReaction_C::ExecuteUbergraph_K24_KillerAudioMenuReaction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction");

	UK24_KillerAudioMenuReaction_C_ExecuteUbergraph_K24_KillerAudioMenuReaction_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
