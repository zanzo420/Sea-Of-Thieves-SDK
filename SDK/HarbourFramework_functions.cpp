﻿// Name: SeaOfThieves, Version: 2.0.23

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

void UHarbourService::AfterRead()
{
	UObject::AfterRead();

}

void UHarbourService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UHarbourInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHarbourInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UHarbourComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UHarbourComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UHarbourServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UHarbourServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
