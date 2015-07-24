#ifndef APP_H
#define APP_H

namespace hacking{
class App {
  int m_member;

 public:
  App();

  int member() const;
  void set_member(int m);
  bool check_members(int other) const;
};
}
#endif  // APP_H
