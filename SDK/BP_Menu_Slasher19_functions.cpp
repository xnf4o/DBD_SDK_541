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
//		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Rifle_Mesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher19_C::UpdateHarpoonOnRifle(class USkeletalMeshComponent* Rifle_Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle");

	ABP_Menu_Slasher19_C_UpdateHarpoonOnRifle_Params params {};
	params.Rifle_Mesh = Rifle_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_Slasher19_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay");

	ABP_Menu_Slasher19_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		DeadByDaylight_ECustomizationCategory              Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher19_C::OnMeshSwitchBP(DeadByDaylight_ECustomizationCategory Category, class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP");

	ABP_Menu_Slasher19_C_OnMeshSwitchBP_Params params {};
	params.Category = Category;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher19_C::ExecuteUbergraph_BP_Menu_Slasher19(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19");

	ABP_Menu_Slasher19_C_ExecuteUbergraph_BP_Menu_Slasher19_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
