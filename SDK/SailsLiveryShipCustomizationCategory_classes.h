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

// BlueprintGeneratedClass SailsLiveryShipCustomizationCategory.SailsLiveryShipCustomizationCategory_C
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class USailsLiveryShipCustomizationCategory_C : public UShipCustomizationCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SailsLiveryShipCustomizationCategory.SailsLiveryShipCustomizationCategory_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
