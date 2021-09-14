
#include <stdio.h>
/*
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
*/
#include "emscripten.h"

//int main() {
//  printf("Hello :)\n");
/*
  lua_State* L = luaL_newstate();
  luaopen_base(L);
  luaopen_table(L);
  luaopen_string(L);
  luaopen_math(L);

  lua_getglobal(L, "print");
  lua_pushstring(L, "Hello from Lua!");
  lua_pcall(L, 1, 0, 0);

  lua_close(L);
*/
//}

int EMSCRIPTEN_KEEPALIVE test() {
  return 42;
}
