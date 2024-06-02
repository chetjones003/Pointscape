#pragma once

#ifdef POINTSCAPE_PLATFORM_WINDOWS
	#ifdef POINTSCAPE_BUILD_DLL
		#define POINTSCAPE_API __declspec(dllexport)
	#else
		#define POINTSCAPE_API __declspec(dllimport)
	#endif

#else
	#error Pointscape only supports Windows!
#endif
