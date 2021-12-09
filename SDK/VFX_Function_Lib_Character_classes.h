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

// BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVFX_Function_Lib_Character_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C");
		return ptr;
	}



	void STATIC_Spawn_Niagara_Particles_Character_Dissolve(bool Killer, class AActor* Actor, class UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool Out, class UObject* __WorldContext);
	void STATIC_SpawnFootstepKillerVFX(bool Run, bool Left, class ASlasherPlayer* SlasherPlayer, class UObject* __WorldContext);
	void STATIC_SpawnFootstepVFX(bool Run, bool Left, class ACamperPlayer* CamperCharacter, class UObject* __WorldContext, bool* Bloody_Footprints, struct FName* Footprint_Socket, int* Surface_Type);
	void STATIC_ManageInteractiveMist(class APawn* Pawn, class UActorComponent* MistActor, class UObject* __WorldContext);
	void STATIC_MakeCharacter_Visible(class ADBDPlayer* Character, class UObject* __WorldContext);
	void STATIC_MakeCharacter_Invisible(class ADBDPlayer* Character, class UObject* __WorldContext);
	void STATIC_MaskFPV_Visible(class ADBDPlayer* Character, class UObject* __WorldContext);
	void STATIC_MaskFPV_Hidden(class ADBDPlayer* Character, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
