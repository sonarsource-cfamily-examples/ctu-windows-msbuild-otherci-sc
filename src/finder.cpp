#include "finder.h"

int findValue(const int* values, int size, int target) {
  for (int i = 0; i < size; ++i) {
    if (values[i] == target) {
      return i;
    }
  }
  return -1;
}
