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

// Class CommodityDemandFramework.CommodityRedemptionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityRedemptionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityRedemptionComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UCommodityRedemptionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_7TLT[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommodityEntitlementRedemptionAsset*        EntitlementRedemptionAsset;                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RedeemEntitlementType;                                     // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GQCV[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCommodityDescWithRedeemId>          RedeemItemsQueue;                                          // 0x00F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData_GJSX[0x50];                                    // 0x0100(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityRedemptionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityTypeDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCommodityTypeDataAsset : public UDataAsset
{
public:
	TArray<struct FCommodityTypeDataEntry>             CommodityEntries;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityTypeDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UCommodityDemandFrameworkEditorSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       CommodityDataFileLocation;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityDemandServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommodityDemandServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityDemandService
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ACommodityDemandService : public AActor
{
public:
	unsigned char                                      UnknownData_MRU7[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityDemandService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCommodityEntitlementRedemptionAsset : public UDataAsset
{
public:
	TArray<struct FEntitlementToRedeemItems>           CommoditiesForRedemption;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
