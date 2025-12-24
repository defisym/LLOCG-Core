#include "LuaInterface.h"

#include "Lua/include/lua.hpp"

#define CUR_FOLDER __FILE__ "\\..\\"
#define RELATIVE_PATH(path) CUR_FOLDER path

#ifdef _WIN64
#pragma comment(lib, RELATIVE_PATH("Lua/x64/lua54.lib"))
#else
#pragma comment(lib, RELATIVE_PATH("Lua/x86/lua54.lib"))
#endif

Lua::Lua() {}
Lua::~Lua() {}