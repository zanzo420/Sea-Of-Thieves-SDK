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

// BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBP_CompanyOnboardingStarter_C : public UCompanyOnboardingStarter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C");
		return ptr;
	}



	bool HasPrerequisites();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
