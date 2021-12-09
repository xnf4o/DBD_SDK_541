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

// Class ThePig.Addon_ThePig_JigsawSketch
// 0x0050 (FullSize[0x02E8] - InheritedSize[0x0298])
class UAddon_ThePig_JigsawSketch : public UItemAddon
{
public:
	TMap<class ACamperPlayer*, class AGenerator*>      _trackedGeneratorRepairs;                                  // 0x0298(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.Addon_ThePig_JigsawSketch");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UPigAmbushAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_GPYJ[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttack");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackOpenSubstate
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_0TFU[0x8];                                     // 0x0130(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttackOpenSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttackHittingSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttackSuccessSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttackMissSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ThePig.PigAmbushAttackObstructSubstate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
