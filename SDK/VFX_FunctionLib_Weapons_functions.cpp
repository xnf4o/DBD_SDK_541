﻿// Name: DeadB, Version: 5

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
//		Name   -> Function VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C.FX_SpawnDissolveEmitter
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HideWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               FPV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_FunctionLib_Weapons_C::STATIC_FX_SpawnDissolveEmitter(bool HideWeapon, bool FPV, class USceneComponent* Mesh, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C.FX_SpawnDissolveEmitter");

	UVFX_FunctionLib_Weapons_C_FX_SpawnDissolveEmitter_Params params {};
	params.HideWeapon = HideWeapon;
	params.FPV = FPV;
	params.Mesh = Mesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
