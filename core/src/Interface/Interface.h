#pragma once

//------------------------------------------------------------------------------
// DLL
//------------------------------------------------------------------------------

#ifdef LLOCG_DLL
#ifdef DLL_EXPORTS
#define LLOCG_API extern "C" __declspec(dllexport)
#else
#define LLOCG_API extern "C" __declspec(dllimport)
#endif
#else
#define LLOCG_API
#endif