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
//		Name   -> Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.IsCharacter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  CamperPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             characterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               IsCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_25_C::IsCharacter(class ADBDPlayer* CamperPlayer, TArray<struct FString>* characterName, bool* IsCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.IsCharacter");

	UBP_Audio_KLR_25_C_IsCharacter_Params params {};
	params.CamperPlayer = CamperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (characterName != nullptr)
		*characterName = params.characterName;
	if (IsCharacter != nullptr)
		*IsCharacter = params.IsCharacter;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.SelectAudioStatusStartEvent
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsInMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAkAudioEvent*                               AudioEvent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_25_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_25_C_SelectAudioStatusStartEvent_Params params {};
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.HitImpactOnSurvivorSFX
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               camper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		DBDSharedTypes_EAttackType                         attackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isWeaponHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_25_C::HitImpactOnSurvivorSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool isWeaponHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.HitImpactOnSurvivorSFX");

	UBP_Audio_KLR_25_C_HitImpactOnSurvivorSFX_Params params {};
	params.camper = camper;
	params.attackType = attackType;
	params.isWeaponHit = isWeaponHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.ExecuteUbergraph_BP_Audio_KLR_26
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_25_C::ExecuteUbergraph_BP_Audio_KLR_26(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_26.BP_Audio_KLR_25_C.ExecuteUbergraph_BP_Audio_KLR_26");

	UBP_Audio_KLR_25_C_ExecuteUbergraph_BP_Audio_KLR_26_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
