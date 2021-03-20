#pragma once

// Name: SeaOfThieves, Version: 2.0.23


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

// BlueprintGeneratedClass BP_PromptActorBase.BP_PromptActorBase_C
// 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
class ABP_PromptActorBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               IsCompleted;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5T4W[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBP_PromptCoordinator_Base_C*>        PromptCoordinators;                                        // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnComplete;                                                // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptActorBase.BP_PromptActorBase_C");
		return ptr;
	}



	void UninitializePrompt(class UBP_PromptCoordinator_Base_C* PromptCoordinator);
	void UninitializeAllPrompts();
	void CheckAllPromptsComplete(bool* AllCompleted);
	void Complete();
	void GetMyClass(class UClass** Class);
	void GetAthenaPlayerController(class AAthenaPlayerController** AthenaPlayerController);
	void UserConstructionScript();
	void Add_Prompt_Coordinator(class UBP_PromptCoordinator_Base_C* Prompt_Coordinator);
	void On_Prompt_Complete();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActorBase(int EntryPoint);
	void OnComplete__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
