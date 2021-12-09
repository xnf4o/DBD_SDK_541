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

// BlueprintGeneratedClass Audio.Audio_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class AAudio_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Audio.Audio_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Audio(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
