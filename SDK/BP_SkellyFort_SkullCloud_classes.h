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

// BlueprintGeneratedClass BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C
// 0x0008 (FullSize[0x0500] - InheritedSize[0x04F8])
class ABP_SkellyFort_SkullCloud_C : public ABP_RotatableSignalCloud_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkellyFort_SkullCloud(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
