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
//		Offset -> 0x062D3220
//		Name   -> Function AnimationUtilities.SleepingAnimInstance.Wakeup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USleepingAnimInstance::Wakeup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.Wakeup");

	USleepingAnimInstance_Wakeup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D3190
//		Name   -> Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               neverIdle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USleepingAnimInstance::SetNeverIdle(bool neverIdle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle");

	USleepingAnimInstance_SetNeverIdle_Params params {};
	params.neverIdle = neverIdle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D3110
//		Name   -> Function AnimationUtilities.SleepingAnimInstance.OnMontageStart
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USleepingAnimInstance::OnMontageStart(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.OnMontageStart");

	USleepingAnimInstance_OnMontageStart_Params params {};
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D1050
//		Name   -> Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		class ACharacter*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       NotifyName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimEffectHandler::HandleAnimNotify(class ACharacter* Player, const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify");

	UAnimEffectHandler_HandleAnimNotify_Params params {};
	params.Player = Player;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D1560
//		Name   -> Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimInstance*                               Root                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimInstance*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimInstance* UAnimInstanceExt::STATIC_GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance");

	UAnimInstanceExt_GetSubAnimInstance_Params params {};
	params.Root = Root;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D14E0
//		Name   -> Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent");

	UAnimInstanceExt_GetRootSkeletalMeshComponent_Params params {};
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D1460
//		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent");

	UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Params params {};
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D13E0
//		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* UAnimInstanceExt::STATIC_GetOwningCharacter(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter");

	UAnimInstanceExt_GetOwningCharacter_Params params {};
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D1360
//		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UAnimInstanceExt::STATIC_GetOwningActor(class UAnimInstance* AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningActor");

	UAnimInstanceExt_GetOwningActor_Params params {};
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D1D40
//		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USkinnedMeshComponent*                       Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent");

	UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D1C50
//		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     targetPos                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     extraOffset                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBaseGroundDetectorComponent::GetGroundPosition(const struct FVector& targetPos, const struct FVector& extraOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition");

	UBaseGroundDetectorComponent_GetGroundPosition_Params params {};
	params.targetPos = targetPos;
	params.extraOffset = extraOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D1F30
//		Name   -> Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       BoneSocketName                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const struct FName& BoneSocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity");

	UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params params {};
	params.BoneSocketName = BoneSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062D2B30
//		Name   -> Function AnimationUtilities.MoveComponentToComponent.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMoveComponentToComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.Stop");

	UMoveComponentToComponent_Stop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D2A20
//		Name   -> Function AnimationUtilities.MoveComponentToComponent.Start
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             componentToMove                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             Target                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMoveComponentToComponent::Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.Start");

	UMoveComponentToComponent_Start_Params params {};
	params.componentToMove = componentToMove;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D2E80
//		Name   -> Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      masterMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlaveAnimInstance::SetMasterMesh(class USkeletalMeshComponent* masterMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh");

	USlaveAnimInstance_SetMasterMesh_Params params {};
	params.masterMesh = masterMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062D2E50
//		Name   -> Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* USlaveAnimInstance::GetMasterMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh");

	USlaveAnimInstance_GetMasterMesh_Params params {};

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
