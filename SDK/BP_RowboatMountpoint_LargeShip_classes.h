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

// BlueprintGeneratedClass BP_RowboatMountpoint_LargeShip.BP_RowboatMountpoint_LargeShip_C
// 0x0000 (FullSize[0x06B0] - InheritedSize[0x06B0])
class ABP_RowboatMountpoint_LargeShip_C : public ABP_RowboatMountpoint_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RowboatMountpoint_LargeShip.BP_RowboatMountpoint_LargeShip_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
