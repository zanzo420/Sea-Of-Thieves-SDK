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

// BlueprintGeneratedClass Proposal_LegendaryStoryteller_Chapter2.Proposal_LegendaryStoryteller_Chapter2_C
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UProposal_LegendaryStoryteller_Chapter2_C : public UVoyageCheckpointProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_LegendaryStoryteller_Chapter2.Proposal_LegendaryStoryteller_Chapter2_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
