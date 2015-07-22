#ifndef BASE_TEST_H
#define BASE_TEST_H
#include <QDateTime>
#include <QDebug>

namespace hacking {
class Timer {
  qint64 m_start;

 public:
  Timer();

  void start();
  qint64 stop();
  void stop_and_print(QString);
};
}

#endif  // BASE_TEST_H
