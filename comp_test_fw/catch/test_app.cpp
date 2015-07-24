#include <catch.hpp>
#include "app.h"

using namespace hacking;

SCENARIO("simple test cases", "[app]") {
  GIVEN("App can get and set member") {
    App a;

    a.set_member(5);
    REQUIRE(a.member() == 5);
  }
}
