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

// BlueprintGeneratedClass OOSLetter_ExclusionEntitlement_Campaign028.OOSLetter_ExclusionEntitlement_Campaign028_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UOOSLetter_ExclusionEntitlement_Campaign028_C : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OOSLetter_ExclusionEntitlement_Campaign028.OOSLetter_ExclusionEntitlement_Campaign028_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif