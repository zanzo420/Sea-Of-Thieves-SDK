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

// Class SafeZoneReservationFramework.SafeZoneComponent
// 0x0060 (FullSize[0x05B0] - InheritedSize[0x0550])
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                 // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                           // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseForceToApplyToShipsInsideSafeZone;                  // 0x0564(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SafeZoneEmptyCollisionProfile;                             // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSafeZoneEmpty;                                           // 0x0570(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_11M0[0x3];                                     // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CurrentCollisionProfile;                                   // 0x0574(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5GG8[0x34];                                    // 0x057C(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SafeZoneReservationFramework.SafeZoneComponent");
		return ptr;
	}



	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateCollider();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
