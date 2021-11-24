#include "lua_State.hpp"
#include "lua.hpp"

lua::State::State() : L(lua_open()) {}

lua::State::~State() {
  lua_close(L);
}

int lua::State::gc(int what) {
  return lua_gc(L, what, 0);
}
