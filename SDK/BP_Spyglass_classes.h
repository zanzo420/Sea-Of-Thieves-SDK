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

// BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C
// 0x0008 (FullSize[0x08D0] - InheritedSize[0x08C8])
class ABP_Spyglass_C : public ASpyglass
{
public:
	unsigned char                                      UnknownData_4YQ9[0x8];                                     // 0x08C8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
