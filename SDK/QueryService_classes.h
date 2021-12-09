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

// Class QueryService.ActorPairQueryEvaluatorComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UActorPairQueryEvaluatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_K98J[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorComponent");
		return ptr;
	}



};

// Class QueryService.ActorPairQueryEvaluatorSubscriberTest
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class AActorPairQueryEvaluatorSubscriberTest : public AActor
{
public:
	unsigned char                                      UnknownData_7478[0x28];                                    // 0x0230(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorSubscriberTest");
		return ptr;
	}



	void OnRangeChanged(bool InRange);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
