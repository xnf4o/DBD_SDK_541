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
// Enums
//---------------------------------------------------------------------------

// Enum FiniteStateMachine.EFiniteStateMachineStatus
enum class FiniteStateMachine_EFiniteStateMachineStatus : uint8_t
{
	EFiniteStateMachineStatus__Stopped = 0,
	EFiniteStateMachineStatus__Running = 1,
	EFiniteStateMachineStatus__Paused = 2,
	EFiniteStateMachineStatus__EFiniteStateMachineStatus_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
