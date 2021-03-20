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

void UTestCollector::AfterRead()
{
	UObject::AfterRead();

}

void UTestCollector::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTestObjectForCollection::AfterRead()
{
	UObject::AfterRead();

}

void UTestObjectForCollection::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UObjectCollectorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UObjectCollectorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
