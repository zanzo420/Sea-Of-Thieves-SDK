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

// BlueprintGeneratedClass BP_gmp_tal_enchanted_compass_ros_01_b_Wieldable.BP_gmp_tal_enchanted_compass_ros_01_b_Wieldable_C
// 0x0000 (FullSize[0x08B8] - InheritedSize[0x08B8])
class ABP_gmp_tal_enchanted_compass_ros_01_b_Wieldable_C : public ABP_Compass_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_tal_enchanted_compass_ros_01_b_Wieldable.BP_gmp_tal_enchanted_compass_ros_01_b_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
