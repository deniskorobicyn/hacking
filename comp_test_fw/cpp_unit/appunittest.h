#ifndef APPUNITTEST_H
#define APPUNITTEST_H
#include <cppunit/extensions/HelperMacros.h>

namespace hacking {
class AppUnitTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(AppUnitTest);
  CPPUNIT_TEST(testAssign);
  CPPUNIT_TEST_SUITE_END();

 public:
  void setUp();
  void tearDown();

  void testAssign();
};
}
#endif  // APPUNITTEST_H
