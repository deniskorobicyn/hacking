#include "timer.h"
using namespace hacking;

Timer::Timer() {
}

void Timer::start() {
  m_start = QDateTime::currentMSecsSinceEpoch();
}

qint64 Timer::stop() {
  return QDateTime::currentMSecsSinceEpoch() - m_start;
}

void Timer::stop_and_print(QString message) {
  qDebug() << message << ' ' << stop() << '\n';
}
