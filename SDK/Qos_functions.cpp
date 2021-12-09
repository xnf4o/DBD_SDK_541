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
//		Offset -> 0x02A91FB0
//		Name   -> Function Qos.QosBeaconClient.ServerQosRequest
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FString                                     InSessionId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");

	AQosBeaconClient_ServerQosRequest_Params params {};
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02A91F30
//		Name   -> Function Qos.QosBeaconClient.ClientQosResponse
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		Qos_EQosResponseType                               response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AQosBeaconClient::ClientQosResponse(Qos_EQosResponseType response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");

	AQosBeaconClient_ClientQosResponse_Params params {};
	params.response = response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
