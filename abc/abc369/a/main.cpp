#include <iostream>

int main(void) {
  long long A, B, difference;

  std::cin >> A >> B;
  difference = A - B;
  if (difference == 0)
    std::cout << 1;
  else if (difference % 2 != 0) {
    std::cout << 2;
  } else {
    std::cout << 3;
  }
  return (0);
}