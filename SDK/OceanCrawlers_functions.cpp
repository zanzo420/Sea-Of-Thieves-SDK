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

void UBTTask_BroadcastOceanCrawlerAbilityAudioEvent::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_BroadcastOceanCrawlerAbilityAudioEvent::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UOceanCrawlerAudioParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(StartHermitBurrowingLoop, UWwiseEvent);
	READ_PTR_FULL(StopHermitBurrowingLoop, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBurrowDownOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBurrowEmergeOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBurrowHealTargetOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitSporeBreathOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBullRushChargeUpOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBullRushChargeGoOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayHermitBullRushStaticImpactOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabPummelWindBackOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabPummelImpactOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabCoralShieldStartOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabCoralShieldEndOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabCoralShieldInterruptedOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabCoralShieldAppliedOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayCrabCoralShieldStopApplyingOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldStartChargeOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldCastOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldInterruptedOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldAppliedToTargetOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldHitToChainOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricElectricShieldFinishedOnTargetOneShot, UWwiseEvent);
	READ_PTR_FULL(PlayEelelectricEelThrowChargeOneShot, UWwiseEvent);
}

void UOceanCrawlerAudioParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(StartHermitBurrowingLoop);
	DELE_PTR_FULL(StopHermitBurrowingLoop);
	DELE_PTR_FULL(PlayHermitBurrowDownOneShot);
	DELE_PTR_FULL(PlayHermitBurrowEmergeOneShot);
	DELE_PTR_FULL(PlayHermitBurrowHealTargetOneShot);
	DELE_PTR_FULL(PlayHermitSporeBreathOneShot);
	DELE_PTR_FULL(PlayHermitBullRushChargeUpOneShot);
	DELE_PTR_FULL(PlayHermitBullRushChargeGoOneShot);
	DELE_PTR_FULL(PlayHermitBullRushStaticImpactOneShot);
	DELE_PTR_FULL(PlayCrabPummelWindBackOneShot);
	DELE_PTR_FULL(PlayCrabPummelImpactOneShot);
	DELE_PTR_FULL(PlayCrabCoralShieldStartOneShot);
	DELE_PTR_FULL(PlayCrabCoralShieldEndOneShot);
	DELE_PTR_FULL(PlayCrabCoralShieldInterruptedOneShot);
	DELE_PTR_FULL(PlayCrabCoralShieldAppliedOneShot);
	DELE_PTR_FULL(PlayCrabCoralShieldStopApplyingOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldStartChargeOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldCastOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldInterruptedOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldAppliedToTargetOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldHitToChainOneShot);
	DELE_PTR_FULL(PlayEelelectricElectricShieldFinishedOnTargetOneShot);
	DELE_PTR_FULL(PlayEelelectricEelThrowChargeOneShot);
}

// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_StopHermitBurrowingLoop
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_StopHermitBurrowingLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_StopHermitBurrowingLoop");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_StopHermitBurrowingLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_StartHermitBurrowingLoop
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_StartHermitBurrowingLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_StartHermitBurrowingLoop");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_StartHermitBurrowingLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitSporeBreathOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitSporeBreathOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitSporeBreathOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitSporeBreathOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowDownOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBurrowDownOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBurrowDownOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBurrowDownOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushStaticImpactOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBullRushStaticImpactOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushStaticImpactOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBullRushStaticImpactOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushChargeUpOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBullRushChargeUpOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushChargeUpOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBullRushChargeUpOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushChargeGoOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayHermitBullRushChargeGoOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayHermitBullRushChargeGoOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayHermitBullRushChargeGoOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldStartChargeOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldStartChargeOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldStartChargeOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldStartChargeOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldInterruptedOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldInterruptedOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldInterruptedOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldInterruptedOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldHitToChainOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldHitToChainOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldHitToChainOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldHitToChainOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldFinishedOnTargetOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldFinishedOnTargetOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldFinishedOnTargetOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldFinishedOnTargetOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldCastOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldCastOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldCastOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldCastOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldAppliedToTargetOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricElectricShieldAppliedToTargetOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricElectricShieldAppliedToTargetOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricElectricShieldAppliedToTargetOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricEelThrowChargeOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayEelelectricEelThrowChargeOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayEelelectricEelThrowChargeOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayEelelectricEelThrowChargeOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabPummelWindBackOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabPummelWindBackOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabPummelWindBackOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabPummelWindBackOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabPummelImpactOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabPummelImpactOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabPummelImpactOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabPummelImpactOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldStopApplyingOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabCoralShieldStopApplyingOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldStopApplyingOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabCoralShieldStopApplyingOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldStartOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabCoralShieldStartOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldStartOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabCoralShieldStartOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldInterruptedOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabCoralShieldInterruptedOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldInterruptedOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabCoralShieldInterruptedOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldEndOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabCoralShieldEndOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldEndOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabCoralShieldEndOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldAppliedOneShot
// (Final, Net, Native, Event, NetMulticast, Private)
void UOceanCrawlerAudioComponent::Multicast_PlayAudio_PlayCrabCoralShieldAppliedOneShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioComponent.Multicast_PlayAudio_PlayCrabCoralShieldAppliedOneShot");

	UOceanCrawlerAudioComponent_Multicast_PlayAudio_PlayCrabCoralShieldAppliedOneShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOceanCrawlerAudioComponent::AfterRead()
{
	UAICharacterAudioComponent::AfterRead();

	READ_PTR_FULL(AudioDataAsset, UOceanCrawlerAudioParamsDataAsset);
	READ_PTR_FULL(CachedOwner, AActor);
}

void UOceanCrawlerAudioComponent::BeforeDelete()
{
	UAICharacterAudioComponent::BeforeDelete();

	DELE_PTR_FULL(AudioDataAsset);
	DELE_PTR_FULL(CachedOwner);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
