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
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AK_Audio_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Audio_State                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Status(const struct FString& AK_Audio_State, class ADBDBasePlayer* Player, class UObject* __WorldContext, struct FString* Audio_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Params params {};
	params.AK_Audio_State = AK_Audio_State;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Audio_State != nullptr)
		*Audio_State = params.Audio_State;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Post_AkEvent(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Post_AkEvent_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Right(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Right_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Left(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Left_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Body(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Body_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_K20_Weapon_Scrap(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap");

	UBP_Audio_FunctionLibrary_C_Audio_K20_Weapon_Scrap_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Surface_Impact(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Surface_Impact_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Impact(class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Impact_Params params {};
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_PullOut(class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_PullOut_Params params {};
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Clean(class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Clean_Params params {};
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Attack(class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Attack_Params params {};
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Arm(class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Arm_Params params {};
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkComponent*                                AudioComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       AudioStateKiller                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkAudioEvent*                               StartEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Setup(class UAkComponent* AudioComponent, const struct FName& AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Setup_Params params {};
	params.AudioComponent = AudioComponent;
	params.AudioStateKiller = AudioStateKiller;
	params.StartEvent = StartEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Post_AkEvent(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Post_AkEvent_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Grunt(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Grunt_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Right(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Right_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Left(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Left_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Body
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Ak_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Body(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Body");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Body_Params params {};
	params.Ak_Audio_Event = Ak_Audio_Event;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
