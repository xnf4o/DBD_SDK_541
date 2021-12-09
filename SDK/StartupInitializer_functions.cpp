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
//		Offset -> 0x03E02C70
//		Name   -> Function StartupInitializer.ClientStartupInitializer.OnHealthCheckTriggered
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		bool                                               requestSuccess                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ProviderError                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               datetimeIsSet                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   utcTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClientStartupInitializer::OnHealthCheckTriggered(bool requestSuccess, int ProviderError, bool datetimeIsSet, const struct FDateTime& utcTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupInitializer.ClientStartupInitializer.OnHealthCheckTriggered");

	UClientStartupInitializer_OnHealthCheckTriggered_Params params {};
	params.requestSuccess = requestSuccess;
	params.ProviderError = ProviderError;
	params.datetimeIsSet = datetimeIsSet;
	params.utcTime = utcTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
