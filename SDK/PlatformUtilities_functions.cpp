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
//		Offset -> 0x02F7C970
//		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlatformSupportSubsystem::DBD_StadiaShowStreamDebug(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug");

	UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll
//		Flags  -> (Final, Exec, Native, Public)
void UPlatformSupportSubsystem::DBD_StadiaRoleSelectPoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll");

	UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll
//		Flags  -> (Final, Exec, Native, Public)
void UPlatformSupportSubsystem::DBD_StadiaCharacterSelectPoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll");

	UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
