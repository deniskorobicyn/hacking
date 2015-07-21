#ifndef TEST_ITERATORS_H
#define TEST_ITERATORS_H
#include <QVector>
#include "timer.h"

namespace hacking {

class TestIterators {
  const size_t size;
  int m_sum;

  QVector<int> m_qvector;

  Timer m_timer;

  void _run_iteration(int v);
  void _init();

  void _raw();
  void _stl();
  void _const_stl();
  void _stl11();
  void _java();

 public:
  TestIterators();

  void run_qvector();
};
}

#endif  // TEST_ITERATORS_H
