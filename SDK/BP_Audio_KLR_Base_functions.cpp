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
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsInMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAkAudioEvent*                               AudioEvent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params params {};
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		AkAudio_EAkResult                                  Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::OnKillerSoundbankLoaded(AkAudio_EAkResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params params {};
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       AudioCharacterName                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::GetAudioCharacterName(class ADBDBasePlayer* Player, struct FName* AudioCharacterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName");

	UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioCharacterName != nullptr)
		*AudioCharacterName = params.AudioCharacterName;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UBP_Audio_KLR_Base_C::InititializeComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent");

	UBP_Audio_KLR_Base_C_InititializeComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay");

	UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay");

	UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		AkAudio_EAkResult                                  Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::Soundbank_Killer_Unloaded(AkAudio_EAkResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded");

	UBP_Audio_KLR_Base_C_Soundbank_Killer_Unloaded_Params params {};
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               camper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		DBDSharedTypes_EAttackType                         attackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               causedKO                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               isWeaponHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               isLightHit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_Base_C::TriggerSurvivorDamageHitAudioSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool causedKO, bool isWeaponHit, bool isLightHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX");

	UBP_Audio_KLR_Base_C_TriggerSurvivorDamageHitAudioSFX_Params params {};
	params.camper = camper;
	params.attackType = attackType;
	params.causedKO = causedKO;
	params.isWeaponHit = isWeaponHit;
	params.isLightHit = isLightHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               camper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		DBDSharedTypes_EAttackType                         attackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isWeaponHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_Base_C::HitImpactOnSurvivorSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool isWeaponHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX");

	UBP_Audio_KLR_Base_C_HitImpactOnSurvivorSFX_Params params {};
	params.camper = camper;
	params.attackType = attackType;
	params.isWeaponHit = isWeaponHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ExecuteUbergraph_BP_Audio_KLR_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base");

	UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
