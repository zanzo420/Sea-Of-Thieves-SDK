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

// BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_StairsLeft.BP_Lantern_LargeShip_BrigDeck_StairsLeft_C
// 0x0000 (FullSize[0x07A5] - InheritedSize[0x07A5])
class ABP_Lantern_LargeShip_BrigDeck_StairsLeft_C : public ABP_InteractableShipLantern_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_StairsLeft.BP_Lantern_LargeShip_BrigDeck_StairsLeft_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
