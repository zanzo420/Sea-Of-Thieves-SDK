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

// Class VoiceGameChat.PlayfabPartyVoiceChannel
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UPlayfabPartyVoiceChannel : public UVoiceChannel
{
public:
	unsigned char                                      UnknownData_2KQS[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VoiceGameChat.PlayfabPartyVoiceChannel");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
