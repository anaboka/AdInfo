#pragma once
#if defined(DM_PLATFORM_IOS) || defined(DM_PLATFORM_ANDROID)

#include <dmsdk/sdk.h>

void ADInfo_InitAdInfoExt(dmExtension::Params* params);
void ADInfo_QueueAdId(const char* adId);
void ADInfo_GetAdId();
bool ADInfo_IsAdvertisingTrackingEnabled();

struct ADInfoData
{
	ADInfoData()
	{
		memset(this, 0, sizeof(*this));
	};

	dmScript::LuaCallbackInfo* m_callback;

	char* m_AdId;
};


#endif
