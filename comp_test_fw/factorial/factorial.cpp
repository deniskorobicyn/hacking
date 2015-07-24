#include "factorial.h"


unsigned int hacking::Factorial(unsigned int number) {
  return number > 1 ? hacking::Factorial(number - 1) * number : 1;
}
