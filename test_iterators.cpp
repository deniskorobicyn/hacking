#include "test_iterators.h"

using namespace hacking;

TestIterators::TestIterators() : size(1 << 28), m_sum(0) {
  m_qvector.resize(size);
  for (auto i = m_qvector.begin(); i != m_qvector.end(); ++i)
    *i = 1;
}

void TestIterators::run_qvector() {
  _raw();
  _stl();
  _const_stl();
  _stl11();
  _java();
}

void TestIterators::_init(){
  m_sum = 0;
}

void TestIterators::_run_iteration(int value) {
  m_sum += value;
}

void TestIterators::_raw() {
  _init();

  int* data = m_qvector.data();

  m_timer.start();
  for (int* i = data; i < data + size; ++i)
    _run_iteration(*i);
  m_timer.stop_and_print("Raw pointer:");
}

void TestIterators::_stl() {
  _init();

  auto end = m_qvector.end();

  m_timer.start();
  for (auto i = m_qvector.begin(); i != end; ++i)
    _run_iteration(*i);
  m_timer.stop_and_print("STL 98 iterator:");
}

void TestIterators::_const_stl() {
  _init();

  auto cend = m_qvector.cend();

  m_timer.start();
  for (auto i = m_qvector.cbegin(); i != cend; ++i)
    _run_iteration(*i);
  m_timer.stop_and_print("STL 98 const iterator:");
}

void TestIterators::_stl11() {
  _init();

  m_timer.start();
  for (auto i : m_qvector)
    _run_iteration(i);
  m_timer.stop_and_print("STL 11 iterator:");
}

void TestIterators::_java() {
  _init();

  QVectorIterator<int> it(m_qvector);

  m_timer.start();
  while (it.hasNext())
    _run_iteration(it.next());
  m_timer.stop_and_print("Java like Qt iterator:");
}
