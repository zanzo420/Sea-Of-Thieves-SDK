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

// BlueprintGeneratedClass BP_TreasureArtifact_Desc_DVR_Common.BP_TreasureArtifact_Desc_DVR_Common_C
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBP_TreasureArtifact_Desc_DVR_Common_C : public UBootyItemDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureArtifact_Desc_DVR_Common.BP_TreasureArtifact_Desc_DVR_Common_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
