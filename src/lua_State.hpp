struct lua_State;
namespace lua {
class State {
public:
  State();
  ~State();
  int gc(int what);

private:
  struct lua_State *L;
};
}
