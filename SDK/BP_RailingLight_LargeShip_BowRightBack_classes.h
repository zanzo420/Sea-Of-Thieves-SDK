﻿#pragma once

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

// BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C
// 0x0000 (FullSize[0x07A1] - InheritedSize[0x07A1])
class ABP_RailingLight_LargeShip_BowRightBack_C : public ABP_InteractableShipRailingLight_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
