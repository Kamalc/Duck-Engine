#pragma once

#ifdef DC_PLATFORM_WINDOWS
	#ifdef DC_BUILD_DLL
		#define DUCK_API __declspec(dllexport)
	#else
		#define DUCK_API __declspec( dllimport )
	#endif
#else
	#error Duck Only Support Windows!
#endif

