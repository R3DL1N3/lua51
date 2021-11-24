#include <Rcpp.h>
#include "lua_State.hpp"

RCPP_MODULE(lua) {
  using namespace Rcpp;
  class_<lua::State>("LuaState")
    .constructor()
    .method("gc", &lua::State::gc, "garbage collect")
  ;
}
