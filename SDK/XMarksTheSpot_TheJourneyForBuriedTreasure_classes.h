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

// BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UXMarksTheSpot_TheJourneyForBuriedTreasure_C : public UVoyageProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
