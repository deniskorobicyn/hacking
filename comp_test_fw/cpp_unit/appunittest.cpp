#include "appunittest.h"
#include "app.h"

using namespace hacking;
// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(AppUnitTest);

void AppUnitTest::setUp() {
}

void AppUnitTest::tearDown() {
}

void AppUnitTest::testAssign() {
  App a;

  a.set_member(5);
  CPPUNIT_ASSERT(a.member() == 5);
}
