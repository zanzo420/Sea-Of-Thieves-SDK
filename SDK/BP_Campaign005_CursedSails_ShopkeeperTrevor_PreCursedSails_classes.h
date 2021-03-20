#pragma once

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

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTrevor_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTrevor_PreCursedSails_C
// 0x0000 (FullSize[0x0628] - InheritedSize[0x0628])
class ABP_Campaign005_CursedSails_ShopkeeperTrevor_PreCursedSails_C : public ABP_Shopkeeper_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTrevor_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTrevor_PreCursedSails_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
