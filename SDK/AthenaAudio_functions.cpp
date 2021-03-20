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

void UAthenaAudioConfig::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ItemProxyPool, UWwiseObjectPoolWrapper);
}

void UAthenaAudioConfig::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ItemProxyPool);
}

void UAthenaAudioModuleSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UAthenaAudioModuleSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
