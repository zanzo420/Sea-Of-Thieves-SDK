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

// BlueprintGeneratedClass BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C
// 0x0000 (FullSize[0x0780] - InheritedSize[0x0780])
class ABP_Shroudbreaker_OnShip_Small_C : public ABP_Shroudbreaker_OnShip_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
