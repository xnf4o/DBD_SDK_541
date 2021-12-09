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
//		Offset -> 0x03524970
//		Name   -> Function DBDBots.DBDAIBTController.OnPawnBump
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ADBDAIBTController::OnPawnBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDAIBTController.OnPawnBump");

	ADBDAIBTController_OnPawnBump_Params params {};
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03524930
//		Name   -> Function DBDBots.DBDAIBTController.Authority_FinishedPlaying
//		Flags  -> (Final, Native, Private)
void ADBDAIBTController::Authority_FinishedPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDAIBTController.Authority_FinishedPlaying");

	ADBDAIBTController_Authority_FinishedPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03524D20
//		Name   -> Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_EDBDScoreTypes                      EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDAIStateComponent::OnUniqueGameplayEvent(DeadByDaylight_EDBDScoreTypes EventType, float amount, class AActor* Instigator, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent");

	UDBDAIStateComponent_OnUniqueGameplayEvent_Params params {};
	params.EventType = EventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03524C10
//		Name   -> Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDBDAIStateComponent::OnStartAimingEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched");

	UDBDAIStateComponent_OnStartAimingEventDispatched_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03524B00
//		Name   -> Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDBDAIStateComponent::OnSpecialAttackEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched");

	UDBDAIStateComponent_OnSpecialAttackEventDispatched_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03524950
//		Name   -> Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UDBDNavLinkCustomComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay");

	UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03527CE0
//		Name   -> Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class AActor*                                      MovingActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DestinationPoint                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavLinkProxy_Base::OnSmartLinkReachedCallback(class AActor* MovingActor, const struct FVector& DestinationPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback");

	ANavLinkProxy_Base_OnSmartLinkReachedCallback_Params params {};
	params.MovingActor = MovingActor;
	params.DestinationPoint = DestinationPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03527CA0
//		Name   -> Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ANavLinkProxy_Base::AutoAdjustSmartLinkPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints");

	ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03527CC0
//		Name   -> Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
//		Flags  -> (Final, Native, Private)
void ANavLinkProxy_DirectMove::OnDisplayDebugInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo");

	ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
