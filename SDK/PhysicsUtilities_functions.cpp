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
//		Offset -> 0x062A2C80
//		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled");

	UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062A2C60
//		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
//		Flags  -> (Final, Native, Private)
void UDynamicCapsuleResizerComponent::OnRep_IsShrinkingAlwaysEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled");

	UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062A2A90
//		Name   -> Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDynamicCapsuleResizerComponent::OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit");

	UDynamicCapsuleResizerComponent_OnHit_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062A3050
//		Name   -> Function PhysicsUtilities.PrimitiveCollection.Remove
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitiveCollection::Remove(class UPrimitiveComponent* Primitive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Remove");

	UPrimitiveCollection_Remove_Params params {};
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062A2FD0
//		Name   -> Function PhysicsUtilities.PrimitiveCollection.Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         Primitive                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitiveCollection::Add(class UPrimitiveComponent* Primitive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Add");

	UPrimitiveCollection_Add_Params params {};
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062A3240
//		Name   -> Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 primitives                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitivesRegistererComponent::SetPrimitives(TArray<class UPrimitiveComponent*> primitives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives");

	UPrimitivesRegistererComponent_SetPrimitives_Params params {};
	params.primitives = primitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
