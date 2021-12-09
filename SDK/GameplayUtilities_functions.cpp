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
//		Offset -> 0x062B4130
//		Name   -> Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::SetIgnoredCharacter(class ACharacter* Character, bool ignore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter");

	UCharacterPusherComponent_SetIgnoredCharacter_Params params {};
	params.Character = Character;
	params.ignore = ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3D60
//		Name   -> Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit");

	UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B36F0
//		Name   -> Function GameplayUtilities.CharacterPusherComponent.Construct
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCapsuleComponent*                           characterDetector                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCapsuleComponent*                           characterCollision                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBasePushStrategyComponent*                  pushStrategy                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.Construct");

	UCharacterPusherComponent_Construct_Params params {};
	params.characterDetector = characterDetector;
	params.characterCollision = characterCollision;
	params.pushStrategy = pushStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B40A0
//		Name   -> Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBasePoolableActorComponent::SetAcquired(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.BasePoolableActorComponent.SetAcquired");

	UBasePoolableActorComponent_SetAcquired_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3AC0
//		Name   -> Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBasePoolableActorComponent::IsAcquired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.BasePoolableActorComponent.IsAcquired");

	UBasePoolableActorComponent_IsAcquired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B3EA0
//		Name   -> Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
//		Flags  -> (Final, Native, Private)
void UAuthoritativePoolableActorComponent::OnRep_Acquired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired");

	UAuthoritativePoolableActorComponent_OnRep_Acquired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3F00
//		Name   -> Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TArray<class AActor*>                              previousPool                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativeActorPoolComponent::OnRep_Pool(TArray<class AActor*> previousPool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool");

	UAuthoritativeActorPoolComponent_OnRep_Pool_Params params {};
	params.previousPool = previousPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3670
//		Name   -> Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed");

	UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3A90
//		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen");

	UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B39E0
//		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels");

	UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B3900
//		Name   -> Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount");

	UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B3B00
//		Name   -> Function GameplayUtilities.CameraUtilities.IsLookingTowards
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AController*                                 Controller                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              precisionAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCameraUtilities::STATIC_IsLookingTowards(class AController* Controller, const struct FVector& Position, float precisionAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CameraUtilities.IsLookingTowards");

	UCameraUtilities_IsLookingTowards_Params params {};
	params.Controller = Controller;
	params.Position = Position;
	params.precisionAngle = precisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		GameplayUtilities_ESightStatus                     Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightableComponent::OnHighestSightStatusChangedBP__DelegateSignature(GameplayUtilities_ESightStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature");

	UCharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3930
//		Name   -> Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		GameplayUtilities_ESightStatus                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GameplayUtilities_ESightStatus UCharacterSightableComponent::GetHighestSightStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus");

	UCharacterSightableComponent_GetHighestSightStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B4380
//		Name   -> Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent");

	UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B4300
//		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent");

	UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B4280
//		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMinimumCharacterScreenPercent(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent");

	UCharacterSightComponent_SetMinimumCharacterScreenPercent_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B4200
//		Name   -> Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMaximumSightDistance(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance");

	UCharacterSightComponent_SetMaximumSightDistance_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3FE0
//		Name   -> Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		TArray<class ACharacter*>                          Characters                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::Server_UpdateDiscernedCharacters(TArray<class ACharacter*> Characters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters");

	UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params params {};
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3EE0
//		Name   -> Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
//		Flags  -> (Final, Native, Private)
void UCharacterSightComponent::OnRep_DiscernibleCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters");

	UCharacterSightComponent_OnRep_DiscernibleCharacters_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3EC0
//		Name   -> Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
//		Flags  -> (Final, Native, Private)
void UCharacterSightComponent::OnRep_CanSee()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee");

	UCharacterSightComponent_OnRep_CanSee_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B37F0
//		Name   -> Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              secondsToAdd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              baseMaxSeconds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              baseRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UChargeableUtilities::STATIC_ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier");

	UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Params params {};
	params.secondsToAdd = secondsToAdd;
	params.baseMaxSeconds = baseMaxSeconds;
	params.baseRate = baseRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B3C10
//		Name   -> Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovementUtilities::STATIC_Local_MoveActorTo(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.MovementUtilities.Local_MoveActorTo");

	UMovementUtilities_Local_MoveActorTo_Params params {};
	params.Actor = Actor;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062B3A10
//		Name   -> Function GameplayUtilities.PawnUtilities.GetOwningPawn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Origin                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UPawnUtilities::STATIC_GetOwningPawn(class AActor* Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.PawnUtilities.GetOwningPawn");

	UPawnUtilities_GetOwningPawn_Params params {};
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062B3960
//		Name   -> Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContext                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UPawnUtilities::STATIC_GetLocallyObservedPawn(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn");

	UPawnUtilities_GetLocallyObservedPawn_Params params {};
	params.WorldContext = WorldContext;

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
