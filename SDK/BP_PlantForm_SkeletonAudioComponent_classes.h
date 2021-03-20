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

// BlueprintGeneratedClass BP_PlantForm_SkeletonAudioComponent.BP_PlantForm_SkeletonAudioComponent_C
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UBP_PlantForm_SkeletonAudioComponent_C : public USkeletonAICharacterAudioComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlantForm_SkeletonAudioComponent.BP_PlantForm_SkeletonAudioComponent_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
