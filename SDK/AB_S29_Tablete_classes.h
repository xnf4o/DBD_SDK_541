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

// AnimBlueprintGeneratedClass AB_S29_Tablete.AB_S29_Tablete_C
// 0x01B9 (FullSize[0x0429] - InheritedSize[0x0270])
class UAB_S29_Tablete_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02B0(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                              // 0x02D8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x02F0(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x0328(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0340(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0378(0x00B0)
	bool                                               Role_Selected;                                             // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_S29_Tablete.AB_S29_Tablete_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_S29_Tablete(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
