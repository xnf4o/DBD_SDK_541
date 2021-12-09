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
//		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility
//		Flags  -> (Event, Protected, BlueprintEvent)
void UUMGAuthenticationProviderSelection::UpdateWidgetsVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility");

	UUMGAuthenticationProviderSelection_UpdateWidgetsVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup
//		Flags  -> (Event, Public, BlueprintEvent)
void UUMGAuthenticationProviderSelection::ShowMigrationFailedPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup");

	UUMGAuthenticationProviderSelection_ShowMigrationFailedPopup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06354F50
//		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAuthenticationProviderSelection::SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider");

	UUMGAuthenticationProviderSelection_SetSelectedAuthenticationProvider_Params params {};
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     playerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAuthenticationProviderSelection::SetMigrateWarningMessageAndShowPopup(const struct FString& playerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup");

	UUMGAuthenticationProviderSelection_SetMigrateWarningMessageAndShowPopup_Params params {};
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x063551E0
//		Name   -> Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAutheticationProviderSelection::SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider");

	UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Params params {};
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
