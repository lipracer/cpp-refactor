#include "rewrite-mlir-cast.h"

struct Type {
  template <typename T> T dyn_cast() { return T{}; }
  template <typename T> bool isa() { return false; }
};

struct SType {
  template <typename T> T dyn_cast() { return T{}; }
};

struct TypeWrap {
  Type f() { return {}; }
  TypeWrap a() { return {}; }
  TypeWrap b() { return {}; }
};

Type create() { return {}; }

int main(int argc, char**) {
    Type t;
    
    t.
    dyn_cast<SType>();
    
    TypeWrap().a().
    b().f().dyn_cast<SType>();

    create().dyn_cast<SType>();
    
    create().
    isa<SType>();

    auto pt = new Type();
    pt->template dyn_cast<SType>();

    SType().
    dyn_cast<int>();

    return 0;
}