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

// BlueprintGeneratedClass BP_gmp_telescope_kra_01_a_v02_Wieldable.BP_gmp_telescope_kra_01_a_v02_Wieldable_C
// 0x0000 (FullSize[0x08D0] - InheritedSize[0x08D0])
class ABP_gmp_telescope_kra_01_a_v02_Wieldable_C : public ABP_Spyglass_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_telescope_kra_01_a_v02_Wieldable.BP_gmp_telescope_kra_01_a_v02_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
