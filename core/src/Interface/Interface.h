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

//------------------------------------------------------------------------------
// Database
//------------------------------------------------------------------------------

LLOCG_API void Database_LoadCardList(const wchar_t* pPath);

//------------------------------------------------------------------------------
// Game
//------------------------------------------------------------------------------

LLOCG_API void Game_StartGame();
LLOCG_API void Game_EndGame();

LLOCG_API void Game_SetPlayerInfo();
LLOCG_API void Game_AddCard();
LLOCG_API void Game_QueryCardField();
LLOCG_API void Game_QueryFieldCard();
