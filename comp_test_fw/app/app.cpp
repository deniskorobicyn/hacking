#include "app.h"

using namespace hacking;
App::App() : m_member(0) {
}

int App::member() const {
  return m_member;
}

void App::set_member(int m) {
  m_member = m;
}
