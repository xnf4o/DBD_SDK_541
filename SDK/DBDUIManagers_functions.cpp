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
//		Offset -> 0x02F68D00
//		Name   -> Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextManager::GetLargeTextEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled");

	UDBDTextManager_GetLargeTextEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F68DE0
//		Name   -> Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUIScaleManager::GetSkillCheckScaleFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor");

	UUIScaleManager_GetSkillCheckScaleFactor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F68D50
//		Name   -> Function DBDUIManagers.UIScaleManager.GetScaleFactor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDUIManagers_EScaleType                           Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUIScaleManager::GetScaleFactor(DBDUIManagers_EScaleType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetScaleFactor");

	UUIScaleManager_GetScaleFactor_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F68D20
//		Name   -> Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUIScaleManager::GetMenuScaleFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor");

	UUIScaleManager_GetMenuScaleFactor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F68CD0
//		Name   -> Function DBDUIManagers.UIScaleManager.GetHudScaleFactor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUIScaleManager::GetHudScaleFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetHudScaleFactor");

	UUIScaleManager_GetHudScaleFactor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F68CA0
//		Name   -> Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDUIManagers_EDPIScaleCurveRatio                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DBDUIManagers_EDPIScaleCurveRatio UUIScaleManager::GetDPIScaleCurveRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio");

	UUIScaleManager_GetDPIScaleCurveRatio_Params params {};

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
