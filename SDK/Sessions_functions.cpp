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

void FCrewSessionBaseTelemetryEvent::AfterRead()
{
}

void FCrewSessionBaseTelemetryEvent::BeforeDelete()
{
}

void FCrewSessionMemberTelemetry::AfterRead()
{
}

void FCrewSessionMemberTelemetry::BeforeDelete()
{
}

void FCrewSessionTelemetry::AfterRead()
{
}

void FCrewSessionTelemetry::BeforeDelete()
{
}

void FCrewSessionBaseSessionTelemetryEvent::AfterRead()
{
	FCrewSessionBaseTelemetryEvent::AfterRead();

}

void FCrewSessionBaseSessionTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseTelemetryEvent::BeforeDelete();

}

void FCrewSessionQoSMeasurementTelemetry::AfterRead()
{
}

void FCrewSessionQoSMeasurementTelemetry::BeforeDelete()
{
}

void FCrewSessionCreatedTelemetryEvent::AfterRead()
{
	FCrewSessionBaseSessionTelemetryEvent::AfterRead();

}

void FCrewSessionCreatedTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseSessionTelemetryEvent::BeforeDelete();

}

void FCrewSessionLeaveTelemetryEvent::AfterRead()
{
	FCrewSessionBaseTelemetryEvent::AfterRead();

}

void FCrewSessionLeaveTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseTelemetryEvent::BeforeDelete();

}

void FCrewSessionJoinedTelemetryEvent::AfterRead()
{
	FCrewSessionBaseSessionTelemetryEvent::AfterRead();

}

void FCrewSessionJoinedTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseSessionTelemetryEvent::BeforeDelete();

}

void FSessionInfoUpdateAvailableEvent::AfterRead()
{
}

void FSessionInfoUpdateAvailableEvent::BeforeDelete()
{
}

void FCrewSessionOperationFailedTelemetryEvent::AfterRead()
{
}

void FCrewSessionOperationFailedTelemetryEvent::BeforeDelete()
{
}

void FCrewSessionMatchmakingFollowedTelemetryEvent::AfterRead()
{
	FCrewSessionBaseSessionTelemetryEvent::AfterRead();

}

void FCrewSessionMatchmakingFollowedTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseSessionTelemetryEvent::BeforeDelete();

}

void FCrewSessionMatchmakingEndedTelemetryEvent::AfterRead()
{
	FCrewSessionBaseSessionTelemetryEvent::AfterRead();

}

void FCrewSessionMatchmakingEndedTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseSessionTelemetryEvent::BeforeDelete();

}

void FCrewSessionMatchmakingStartedTelemetryEvent::AfterRead()
{
	FCrewSessionBaseTelemetryEvent::AfterRead();

}

void FCrewSessionMatchmakingStartedTelemetryEvent::BeforeDelete()
{
	FCrewSessionBaseTelemetryEvent::BeforeDelete();

}

void FSessionTemplate::AfterRead()
{
}

void FSessionTemplate::BeforeDelete()
{
}

void FCrewSessionTemplate::AfterRead()
{
	FSessionTemplate::AfterRead();

	READ_PTR_FULL(ShipSize, UClass);
}

void FCrewSessionTemplate::BeforeDelete()
{
	FSessionTemplate::BeforeDelete();

	DELE_PTR_FULL(ShipSize);
}

void FSessionLostEvent::AfterRead()
{
}

void FSessionLostEvent::BeforeDelete()
{
}

void FSessionDetailsChangedEvent::AfterRead()
{
}

void FSessionDetailsChangedEvent::BeforeDelete()
{
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
