// Name: SeaOfThieves, Version: 2.0.23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FEventCommodityCrateRedeemed::AfterRead()
{
}

void FEventCommodityCrateRedeemed::BeforeDelete()
{
}

void FCommoditySelectionType::AfterRead()
{
}

void FCommoditySelectionType::BeforeDelete()
{
}

void FCommodityDescWithRedeemId::AfterRead()
{
	READ_PTR_FULL(RedeemItemDesc, UClass);
}

void FCommodityDescWithRedeemId::BeforeDelete()
{
	DELE_PTR_FULL(RedeemItemDesc);
}

void FEntitlementToRedeemItems::AfterRead()
{
	READ_PTR_FULL(RequiredEntitlement, UClass);
}

void FEntitlementToRedeemItems::BeforeDelete()
{
	DELE_PTR_FULL(RequiredEntitlement);
}

void FCommodityTypeDataEntry::AfterRead()
{
}

void FCommodityTypeDataEntry::BeforeDelete()
{
}

void UCommodityRedemptionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityRedemptionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCommodityRedemptionComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(EntitlementRedemptionAsset, UCommodityEntitlementRedemptionAsset);
	READ_PTR_FULL(RedeemEntitlementType, UClass);
}

void UCommodityRedemptionComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(EntitlementRedemptionAsset);
	DELE_PTR_FULL(RedeemEntitlementType);
}

void UCommodityTypeDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCommodityTypeDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCommodityDemandFrameworkEditorSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UCommodityDemandFrameworkEditorSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UCommodityDemandServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCommodityDemandServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ACommodityDemandService::AfterRead()
{
	AActor::AfterRead();

}

void ACommodityDemandService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UCommodityEntitlementRedemptionAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCommodityEntitlementRedemptionAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
