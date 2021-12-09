#pragma once

// Name: DeadB, Version: 5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FiniteStateMachine.FiniteStateMachine
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UFiniteStateMachine : public UActorComponent
{
public:
	class UClass*                                      _defaultStateClass;                                        // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFSM_State*                                  _currentState;                                             // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FiniteStateMachine_EFiniteStateMachineStatus       _currentStateMachineStatus;                                // 0x00C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XE83[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     _stateMachineOwner;                                        // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFSM_State*>                          _stateInstances;                                           // 0x00D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FiniteStateMachine");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_Condition
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFSM_Condition : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_Condition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_AndCondition
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UFSM_AndCondition : public UFSM_Condition
{
public:
	TArray<class UFSM_Condition*>                      _conditions;                                               // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_AndCondition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_HasStateRanForXSecondsCondition
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UFSM_HasStateRanForXSecondsCondition : public UFSM_Condition
{
public:
	struct FDBDTunableRowHandle                        _minTimeInSecondsToSatisfyCondition;                       // 0x0038(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_HasStateRanForXSecondsCondition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_NotCondition
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UFSM_NotCondition : public UFSM_Condition
{
public:
	class UFSM_Condition*                              _condition;                                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_NotCondition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_OrCondition
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UFSM_OrCondition : public UFSM_Condition
{
public:
	TArray<class UFSM_Condition*>                      _conditions;                                               // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_OrCondition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_RefCondition
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UFSM_RefCondition : public UFSM_Condition
{
public:
	class UFSM_Condition*                              _refcondition;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_RefCondition");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_State
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UFSM_State : public UObject
{
public:
	struct FName                                       _stateName;                                                // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _shouldTick;                                               // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFK0[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _defaultChildStateClass;                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFSM_Transition*>                     _transitions;                                              // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFiniteStateMachine*                         _stateMachine;                                             // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFSM_State*                                  _parentState;                                              // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFSM_State*                                  _currentChildState;                                        // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startTimestamp;                                           // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_83SD[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_State");
		return ptr;
	}



};

// Class FiniteStateMachine.FSM_Transition
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UFSM_Transition : public UDataAsset
{
public:
	struct FName                                       _transitionName;                                           // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_80L9[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _transitionStateClass;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFSM_Condition*>                      _conditions;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FiniteStateMachine.FSM_Transition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
