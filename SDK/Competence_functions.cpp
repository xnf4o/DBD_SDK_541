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
//		Offset -> 0x062C2C10
//		Name   -> Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FModifierReplicatedEventConditionData       oldReplicatedCondition                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseModifierContainer::OnRep_EventDrivenConditionData_Internal(const struct FModifierReplicatedEventConditionData& oldReplicatedCondition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal");

	UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Params params {};
	params.oldReplicatedCondition = oldReplicatedCondition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F77E00
//		Name   -> Function Competence.BaseModifierContainer.IsApplicable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseModifierContainer::IsApplicable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.IsApplicable");

	UBaseModifierContainer_IsApplicable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C2B80
//		Name   -> Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventDrivenModifierCondition*               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(class UClass* conditionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition");

	UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params params {};
	params.conditionType = conditionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
//		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions");

	UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C2750
//		Name   -> Function Competence.BaseModifierCondition.SetSubjectProviderClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseModifierCondition::SetSubjectProviderClass(class UClass* subjectProviderClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.SetSubjectProviderClass");

	UBaseModifierCondition_SetSubjectProviderClass_Params params {};
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C2730
//		Name   -> Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
//		Flags  -> (Final, Native, Private)
void UBaseModifierCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass");

	UBaseModifierCondition_OnRep_SubjectProviderClass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C2710
//		Name   -> Function Competence.BaseModifierCondition.OnRep_OwningModifier
//		Flags  -> (Final, Native, Private)
void UBaseModifierCondition::OnRep_OwningModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_OwningModifier");

	UBaseModifierCondition_OnRep_OwningModifier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void UBaseModifierCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass");

	UBaseModifierCondition_InitializeSubjectProviderClass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C26E0
//		Name   -> Function Competence.BaseModifierCondition.GetOwningActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UBaseModifierCondition::GetOwningActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.GetOwningActor");

	UBaseModifierCondition_GetOwningActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C5AA0
//		Name   -> Function Competence.RangeBasedCondition.OnRep_Range
//		Flags  -> (Final, Native, Private)
void URangeBasedCondition::OnRep_Range()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.RangeBasedCondition.OnRep_Range");

	URangeBasedCondition_OnRep_Range_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C3060
//		Name   -> Function Competence.CompositeModifierCondition.OnRep_Conditions
//		Flags  -> (Final, Native, Private)
void UCompositeModifierCondition::OnRep_Conditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.CompositeModifierCondition.OnRep_Conditions");

	UCompositeModifierCondition_OnRep_Conditions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C39E0
//		Name   -> Function Competence.ConditionFactory.Or
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UOrModifierCondition*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOrModifierCondition* UConditionFactory::STATIC_Or()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Or");

	UConditionFactory_Or_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C3940
//		Name   -> Function Competence.ConditionFactory.Not
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNotModifierCondition*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNotModifierCondition* UConditionFactory::STATIC_Not()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Not");

	UConditionFactory_Not_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C3860
//		Name   -> Function Competence.ConditionFactory.IsTimerDone
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UIsTimerDoneCondition*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UIsTimerDoneCondition* UConditionFactory::STATIC_IsTimerDone(class UTimerObject* Timer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.IsTimerDone");

	UConditionFactory_IsTimerDone_Params params {};
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C3700
//		Name   -> Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URangeBasedCondition*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedConditionWithSubject(class UClass* conditionType, float Range, class UClass* subjectProviderClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject");

	UConditionFactory_CreateRangeBasedConditionWithSubject_Params params {};
	params.conditionType = conditionType;
	params.Range = Range;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C35D0
//		Name   -> Function Competence.ConditionFactory.CreateRangeBasedCondition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URangeBasedCondition*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedCondition(class UClass* conditionType, float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedCondition");

	UConditionFactory_CreateRangeBasedCondition_Params params {};
	params.conditionType = conditionType;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C34B0
//		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventDrivenModifierCondition*               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionWithSubjectForBP(class UClass* conditionType, class UClass* subjectProviderClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP");

	UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params params {};
	params.conditionType = conditionType;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C33D0
//		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventDrivenModifierCondition*               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionForBP(class UClass* conditionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionForBP");

	UConditionFactory_CreateAndReceiveConditionForBP_Params params {};
	params.conditionType = conditionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C3330
//		Name   -> Function Competence.ConditionFactory.And
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAndModifierCondition*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAndModifierCondition* UConditionFactory::STATIC_And()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.And");

	UConditionFactory_And_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062C4960
//		Name   -> Function Competence.HasObjectState.SetState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasObjectState::SetState(const struct FGameplayTag& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.HasObjectState.SetState");

	UHasObjectState_SetState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C4B70
//		Name   -> Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasObjectStateWithMaxDuration::SetMaxDuration(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration");

	UHasObjectStateWithMaxDuration_SetMaxDuration_Params params {};
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C5170
//		Name   -> Function Competence.IsTimerDoneCondition.SetTimer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsTimerDoneCondition::SetTimer(class UTimerObject* Timer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.SetTimer");

	UIsTimerDoneCondition_SetTimer_Params params {};
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C5150
//		Name   -> Function Competence.IsTimerDoneCondition.OnRep_Timer
//		Flags  -> (Final, Native, Private)
void UIsTimerDoneCondition::OnRep_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.OnRep_Timer");

	UIsTimerDoneCondition_OnRep_Timer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062C55B0
//		Name   -> Function Competence.NotModifierCondition.OnRep_Condition
//		Flags  -> (Final, Native, Private)
void UNotModifierCondition::OnRep_Condition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Competence.NotModifierCondition.OnRep_Condition");

	UNotModifierCondition_OnRep_Condition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
