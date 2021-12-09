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
//		Offset -> 0x0636EEB0
//		Name   -> Function VFXUtilities.VFXUtilities.SetParticleSystemsActive
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVFXUtilities::STATIC_SetParticleSystemsActive(bool Active, bool Reset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemsActive");

	UVFXUtilities_SetParticleSystemsActive_Params params {};
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0636EDA0
//		Name   -> Function VFXUtilities.VFXUtilities.SetParticleSystemActive
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFXSystemComponent*                          ParticleSystem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVFXUtilities::STATIC_SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemActive");

	UVFXUtilities_SetParticleSystemActive_Params params {};
	params.ParticleSystem = ParticleSystem;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
