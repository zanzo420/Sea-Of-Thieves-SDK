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

// BlueprintGeneratedClass SDLetter_ExclusionEntitlementCampaign019.SDLetter_ExclusionEntitlementCampaign019_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class USDLetter_ExclusionEntitlementCampaign019_C : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SDLetter_ExclusionEntitlementCampaign019.SDLetter_ExclusionEntitlementCampaign019_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
