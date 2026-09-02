#include <iostream>

#include "finder.h"

int main() {
  int haystack[] = {1, 2, 3};
  int index = findValue(haystack, 3, 42); // 42 is not in haystack
  std::cout << "Found value: " << haystack[index] << "\n"; // intentional CTU-only out-of-bounds access

  return 0;
}
