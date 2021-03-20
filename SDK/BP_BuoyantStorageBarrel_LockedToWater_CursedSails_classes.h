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

// BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C
// 0x0020 (FullSize[0x0760] - InheritedSize[0x0740])
class ABP_BuoyantStorageBarrel_LockedToWater_CursedSails_C : public ABuoyantStorageContainer
{
public:
	class USphereComponent*                            Sphere;                                                    // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UReplenishableComponent*                     Replenishable;                                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStorageContainerComponent*                  StorageContainer;                                          // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C");
		return ptr;
	}



	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
