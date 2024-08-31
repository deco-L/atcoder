#include <iostream>
#include <cstdlib>

int main(void) {
  long long N, A, R, L, result;
  std::string S;

  R = 0;
  L = 0;
  result = 0;
  std::cin >> N;
  for (size_t index = 0; index < N; index++) {
    std::cin >> A >> S;
    if (S == "R") {
      if (R != 0) {
        result += std::abs(R - A);
      }
      R = A;
    } else {
      if (L != 0) {
        result+= std::abs(L - A);
      }
      L = A;
    }
  }
  std::cout << result;
  return (EXIT_SUCCESS);
}