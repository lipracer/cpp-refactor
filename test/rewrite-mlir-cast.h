#pragma once

namespace a {
struct Type {
  template <typename T> T dyn_cast() { return T{}; }
  template <typename T> bool isa() { return false; }
};

struct SType {
  template <typename T> T dyn_cast() {
    dyn_cast<SType>(Type());
    return T{};
  }
};

struct TypeWrap {
  Type f() { return {}; }
  TypeWrap a() { return {}; }
  TypeWrap b() { return {}; }
};

Type create() { return {}; }
} // namespace a
