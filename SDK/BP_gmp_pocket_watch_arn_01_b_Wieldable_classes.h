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

// BlueprintGeneratedClass BP_gmp_pocket_watch_arn_01_b_Wieldable.BP_gmp_pocket_watch_arn_01_b_Wieldable_C
// 0x0000 (FullSize[0x0AC0] - InheritedSize[0x0AC0])
class ABP_gmp_pocket_watch_arn_01_b_Wieldable_C : public ABP_PocketWatch_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_pocket_watch_arn_01_b_Wieldable.BP_gmp_pocket_watch_arn_01_b_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
