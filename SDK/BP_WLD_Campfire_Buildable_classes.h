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

// BlueprintGeneratedClass BP_WLD_Campfire_Buildable.BP_WLD_Campfire_Buildable_C
// 0x0000 (FullSize[0x07D8] - InheritedSize[0x07D8])
class ABP_WLD_Campfire_Buildable_C : public ABP_Base_Campfire_Buildable_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WLD_Campfire_Buildable.BP_WLD_Campfire_Buildable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
