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

// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// 0x0088 (FullSize[0x0648] - InheritedSize[0x05C0])
class ABP_HullDamage_C : public AHullDamage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHitReactionComponent*                       HitReaction;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBakedDecalComponent*                        ImpactDecalComponent;                                      // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UTexture2D*>                          Persistent_Damage_Decals;                                  // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             Damage_VFX;                                                // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstance*>                   Deferred_Damage_Decals;                                    // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Deferred_Min_Size;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Deferred_Max_Size;                                         // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Persistent_Min_Size;                                       // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Persistent_Max_Size;                                       // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRandomStream                               RandomDecalStream;                                         // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TEST_HitStrength;                                          // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TEST_PenetrationThreshold;                                 // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AShip*                                       ParentShip;                                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWwiseEmitter                               CannonballHitEmitter;                                      // 0x0628(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C");
		return ptr;
	}



	void Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal);
	void PlayHitSFX(const struct FVector& HitLocation, float HitStrenght);
	void Apply_Visual_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool HasDecal, class UDecalComponent** Decal);
	void Process_Hit(struct FImpactDamageEvent* ImpactDamageEvent);
	void Scale_Hit_Strength_and_Get_Decal_Flag(const struct FVector& Hit_Normal, const struct FVector& Hit_Velocity, float Hit_Strength, float* Strength, bool* HasDecal);
	void Get_Random_Deferred_Decal(class UMaterialInterface** Decal_Material);
	void Get_Random_Persistent_Decal(class UTexture2D** Decal_Texture);
	void Initialize_Damage_Materials(TArray<class UStaticMeshComponent*>* StaticMeshes);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature(const struct FImpactDamageEvent& ImpactDamageEvent);
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
