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

// Class TheHag.HagAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UHagAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_T6D5[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHag.HagAnimInstance");
		return ptr;
	}



};

// Class TheHag.PhantomTrapBurnable
// 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
class UPhantomTrapBurnable : public ULightBurnable
{
public:
	float                                              _traceZOffset;                                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_46T6[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheHag.PhantomTrapBurnable");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
