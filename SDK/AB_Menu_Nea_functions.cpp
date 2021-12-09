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
//		Name   -> Function AB_Menu_Nea.AB_Menu_Nea_C.Override_nea_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_Menu_Nea_C::Override_nea_1(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Nea.AB_Menu_Nea_C.Override_nea_1");

	UAB_Menu_Nea_C_Override_nea_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Dynamic
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_Menu_Nea_C::Override_Dynamic(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Dynamic");

	UAB_Menu_Nea_C_Override_Dynamic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
