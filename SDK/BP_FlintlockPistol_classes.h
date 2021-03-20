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

// BlueprintGeneratedClass BP_FlintlockPistol.BP_FlintlockPistol_C
// 0x0024 (FullSize[0x0AA0] - InheritedSize[0x0A7C])
class ABP_FlintlockPistol_C : public AProjectileWeapon
{
public:
	unsigned char                                      UnknownData_GBGH[0x4];                                     // 0x0A7C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        sfx_relationship;                                          // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XB9S[0x7];                                     // 0x0A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlintlockPistol.BP_FlintlockPistol_C");
		return ptr;
	}



	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_FlintlockPistol(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
