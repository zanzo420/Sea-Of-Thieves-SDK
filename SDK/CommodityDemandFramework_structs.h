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
// Enums
//---------------------------------------------------------------------------

// Enum CommodityDemandFramework.ECommodityDemand
enum class CommodityDemandFramework_ECommodityDemand : uint8_t
{
	ECommodityDemand__None         = 0,
	ECommodityDemand__Low          = 1,
	ECommodityDemand__Normal       = 2,
	ECommodityDemand__High         = 3,
	ECommodityDemand__ECommodityDemand_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommodityDemandFramework.EventCommodityCrateRedeemed
// 0x0018
struct FEventCommodityCrateRedeemed
{
	unsigned char                                      UnknownData_Y35H[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CommodityDemandFramework.CommoditySelectionType
// 0x0008
struct FCommoditySelectionType
{
	struct FName                                       CommodityType;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CommodityDemandFramework.CommodityDescWithRedeemId
// 0x0010
struct FCommodityDescWithRedeemId
{
	struct FCommoditySelectionType                     RedeemId;                                                  // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      RedeemItemDesc;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CommodityDemandFramework.EntitlementToRedeemItems
// 0x0018
struct FEntitlementToRedeemItems
{
	class UClass*                                      RequiredEntitlement;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FCommodityDescWithRedeemId>          RedeemItems;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CommodityDemandFramework.CommodityTypeDataEntry
// 0x0010
struct FCommodityTypeDataEntry
{
	struct FName                                       CommodityType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DisplayName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
