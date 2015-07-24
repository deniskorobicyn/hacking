#ifndef TIMER_H
#define TIMER_H

#include <QtCore/qglobal.h>

#if defined(TIMER_LIBRARY)
#  define TIMERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TIMERSHARED_EXPORT Q_DECL_IMPORT
#endif


#include <QDebug>
#include <QDateTime>

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

#endif  // TIMER_H
