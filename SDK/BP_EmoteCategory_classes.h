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

// BlueprintGeneratedClass BP_EmoteCategory.BP_EmoteCategory_C
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UBP_EmoteCategory_C : public UEmoteCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmoteCategory.BP_EmoteCategory_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif