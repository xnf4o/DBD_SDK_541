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

// Class TheDoctor.DoctorAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UDoctorAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_QWI1[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDoctor.DoctorAnimInstance");
		return ptr;
	}



};

// Class TheDoctor.MadnessSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isTotallyInsane;                                          // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H0MY[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDoctor.MadnessSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheDoctor.Overcharge
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class UOvercharge : public UPerk
{
public:
	float                                              _skillCheckFailurePenalty[0x3];                            // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q0CF[0x1C];                                    // 0x03DC(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDoctor.Overcharge");
		return ptr;
	}



};

// Class TheDoctor.SurvivorMadnessEffect
// 0x00E0 (FullSize[0x0430] - InheritedSize[0x0350])
class USurvivorMadnessEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_41ZX[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _madness;                                                  // 0x0358(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HUIH[0xD4];                                    // 0x035C(0x00D4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDoctor.SurvivorMadnessEffect");
		return ptr;
	}



	void Server_AddMadness(float madnessToAdd);
	void OnStaticBlastReceived_BP();
	void OnStaticBlastReceived();
	void OnSnapOutOfIt_BP();
	void OnSnapOutOfIt();
	void OnShockTherapyReceived_BP();
	void OnShockTherapyReceived();
	void OnMadnessTierUp_BP();
	void OnMadnessTierDown_BP();
	void Multicast_UpdateMadnessPlayerTags(int newMadness);
	void Multicast_OnMadnessTierUp();
	void Multicast_OnMadnessTierDown();
	float GetMadnessValue();
	int GetMadnessTier();
	void ChangeMadnessAudio_Cosmetic(int madnessTier);
	void Authority_OnMadnessScreamTimerEnd_BP();
};

// Class TheDoctor.TheDoctorUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTheDoctorUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheDoctor.TheDoctorUtilities");
		return ptr;
	}



	bool STATIC_IsTotallyInsane(class ADBDPlayer* Player);
	class USurvivorMadnessEffect* STATIC_GetSurvivorMadnessEffect(class ADBDPlayer* Player);
	int STATIC_GetMadnessTier(class ADBDPlayer* Player);
	bool STATIC_CanGainInsanity(class ADBDPlayer* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
