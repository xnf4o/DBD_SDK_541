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

// AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C
// 0x05E4 (FullSize[0x0854] - InheritedSize[0x0270])
class UAB_Menu_Slasher26_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x02B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x02D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0300(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0328(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0350(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x03C8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0400(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0478(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x04B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0528(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x05A0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0640(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x06B8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0758(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0790(0x00B0)
	bool                                               Role_Selected;                                             // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x0841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               _interrupt02;                                              // 0x0842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PIJ9[0x5];                                     // 0x0843(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Menu_Slasher26_C*                        KillerBP;                                                  // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomInterupt;                                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnNotifyEnd_0B64AF184ABD119B2E2270BFA977CABB(const struct FName& NotifyName);
	void OnNotifyBegin_0B64AF184ABD119B2E2270BFA977CABB(const struct FName& NotifyName);
	void OnInterrupted_0B64AF184ABD119B2E2270BFA977CABB(const struct FName& NotifyName);
	void OnBlendOut_0B64AF184ABD119B2E2270BFA977CABB(const struct FName& NotifyName);
	void OnCompleted_0B64AF184ABD119B2E2270BFA977CABB(const struct FName& NotifyName);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_59A388FC4E690DF0F2E3D890704EDD1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_05E0BAAB4A85C91D9E56BA88B668A259();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_6E64C09E483F3071218CA5B4D896DFA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher26_AnimGraphNode_TransitionResult_B7FBDE744D7EABF276D9EBA9F4661A25();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Interupt02Start();
	void AnimNotify_Idle();
	void ExecuteUbergraph_AB_Menu_Slasher26(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
