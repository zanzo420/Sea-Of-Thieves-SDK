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

// Class SirensAnimation.SirenAnimationData
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class USirenAnimationData : public UAnimationData
{
public:
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0028(0x0040) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SirensAnimation.SirenAnimationInstance
// 0x0230 (FullSize[0x0670] - InheritedSize[0x0440])
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_KUST[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PropAttachmentSocket;                                      // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0458(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FAthenaAnimationWeapon                      AttackAnimations;                                          // 0x0498(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                              // 0x0550(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltDirectionAngleDegrees;                                 // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltAngleAlpha;                                            // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpinAngleDegrees;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;           // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpperBodyOverlayActive;                                    // 0x0564(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SwimmingLongways;                                          // 0x0565(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B4DS[0x6];                                     // 0x0566(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AnimationsLoaded;                                          // 0x056C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BOG1[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         FullBodyStateMachine;                                      // 0x0570(0x00D8)
	unsigned char                                      UnknownData_KWJU[0x28];                                    // 0x0648(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
