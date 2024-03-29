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

// Class AuthenticationToken.JwtAuthenticationTokenEditorSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UJwtAuthenticationTokenEditorSettings : public UObject
{
public:
	struct FString                                     TokenSecretKey;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenEditorSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AuthenticationToken.JwtAuthenticationTokenSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UJwtAuthenticationTokenSettings : public UObject
{
public:
	struct FString                                     TokenSecretKey;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
