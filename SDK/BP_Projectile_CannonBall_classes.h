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

// BlueprintGeneratedClass BP_Projectile_CannonBall.BP_Projectile_CannonBall_C
// 0x0018 (FullSize[0x06A0] - InheritedSize[0x0688])
class ABP_Projectile_CannonBall_C : public ACannonProjectile
{
public:
	class USphereCollisionExtentAdjustOverTimeComponent* SphereCollisionExtentAdjustOverTime;                       // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CannonBall;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Collision;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_CannonBall.BP_Projectile_CannonBall_C");
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
