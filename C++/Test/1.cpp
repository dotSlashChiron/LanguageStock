#include <iostream>

void print_till_one(int i) {
  i--;
  if(i > 1) {
    std::cout << i << std::endl;
    print_till_one(i);
  }
}

int ohhhmain() {
  print_till_one(0);
  return 0;
}