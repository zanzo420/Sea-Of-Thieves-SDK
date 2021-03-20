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

// BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class ABP_SkellyShip_ShipCloud_C : public ABP_SkellyFort_SkullCloud_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
