﻿#pragma once

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

// BlueprintGeneratedClass BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBP_Audio_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C");
		return ptr;
	}



	void STATIC_Audio_Survivor_Status(const struct FString& AK_Audio_State, class ADBDBasePlayer* Player, class UObject* __WorldContext, struct FString* Audio_State);
	void STATIC_Audio_Survivor_Post_AkEvent(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Survivor_Footstep_Right(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Survivor_Footstep_Left(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Survivor_Grunt(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Survivor_Body(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_K20_Weapon_Scrap(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Surface_Impact(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon_Impact(class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon_PullOut(class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon_Clean(class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon_Attack(class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon_Arm(class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Setup(class UAkComponent* AudioComponent, const struct FName& AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Post_AkEvent(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Weapon(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Grunt(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Footstep_Right(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Footstep_Left(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
	void STATIC_Audio_Killer_Body(class UAkAudioEvent* Ak_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
