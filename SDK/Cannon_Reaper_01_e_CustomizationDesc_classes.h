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

// BlueprintGeneratedClass Cannon_Reaper_01_e_CustomizationDesc.Cannon_Reaper_01_e_CustomizationDesc_C
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UCannon_Reaper_01_e_CustomizationDesc_C : public UShipCustomizationDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cannon_Reaper_01_e_CustomizationDesc.Cannon_Reaper_01_e_CustomizationDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
