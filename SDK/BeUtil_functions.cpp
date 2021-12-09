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
//		Offset -> 0x02D14720
//		Name   -> Function BeUtil.BeMaterialEditorHelper.ReloadTexture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    InTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InSourceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UBeMaterialEditorHelper::STATIC_ReloadTexture(class UTexture* InTexture, const struct FString& InSourceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.ReloadTexture");

	UBeMaterialEditorHelper_ReloadTexture_Params params {};
	params.InTexture = InTexture;
	params.InSourceName = InSourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02D14500
//		Name   -> Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceConstant*                   InMaterialInstance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FBeMaterialScalar>                   InScalars                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FBeMaterialVector>                   InVectors                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FBeMaterialTexture>                  InTextures                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBeMaterialEditorHelper::STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant");

	UBeMaterialEditorHelper_EditMaterialConstant_Params params {};
	params.InMaterialInstance = InMaterialInstance;
	params.InScalars = InScalars;
	params.InVectors = InVectors;
	params.InTextures = InTextures;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
