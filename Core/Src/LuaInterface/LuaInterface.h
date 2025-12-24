#pragma once

typedef void* LuaHandle;

struct Lua {
    LuaHandle hLua = nullptr;
    Lua();
    ~Lua();
};

struct LuaInterface {

};