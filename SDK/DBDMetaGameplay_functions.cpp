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
//		Offset -> 0x035C2DA0
//		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ADBDPlayer*                                  chasedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDEmblem_KillerChaser::OnChaseStart(class ADBDPlayer* chasedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart");

	UDBDEmblem_KillerChaser_OnChaseStart_Params params {};
	params.chasedPlayer = chasedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035C3050
//		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UDBDEmblem_KillerDevout::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay");

	UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035C33A0
//		Name   -> Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Public)
void UDBDEmblem_KillerMalicious::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay");

	UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035C37F0
//		Name   -> Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ADBDPlayer*                                  chasedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDEmblem_SurvivorEvader::OnChaseStartEvent(class ADBDPlayer* chasedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent");

	UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params params {};
	params.chasedPlayer = chasedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035C3B90
//		Name   -> Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void UDBDEmblem_SurvivorUnbroken::OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted");

	UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
