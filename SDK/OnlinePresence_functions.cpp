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
//		Offset -> 0x02C80D60
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		struct FString                                     CurrencyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsWalletWithdraw(const struct FString& CurrencyName, int value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params params {};
	params.CurrencyName = CurrencyName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C80C80
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		struct FString                                     CurrencyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsWalletGetCurrency(const struct FString& CurrencyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params params {};
	params.CurrencyName = CurrencyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C80D60
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		struct FString                                     StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsSaveTestValue(const struct FString& StateName, int Version)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params params {};
	params.StateName = StateName;
	params.Version = Version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C80C80
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		struct FString                                     StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsGetValue(const struct FString& StateName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params params {};
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C80BD0
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		struct FString                                     inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_IsDlcInstalled(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled");

	UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params params {};
	params.inString = inString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02C80BA0
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_GrantPromoItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems");

	UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02C80BA0
//		Name   -> Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_GenerateTestItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems");

	UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
