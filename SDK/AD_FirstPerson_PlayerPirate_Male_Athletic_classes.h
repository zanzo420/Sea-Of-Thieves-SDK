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

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Athletic.AD_FirstPerson_PlayerPirate_Male_Athletic_C
// 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
class UAD_FirstPerson_PlayerPirate_Male_Athletic_C : public UAD_FirstPerson_PlayerPirate_Male_Default_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Athletic.AD_FirstPerson_PlayerPirate_Male_Athletic_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
