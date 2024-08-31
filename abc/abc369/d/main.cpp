#include <iostream>
#include <cstdlib>

int main(void) {
  long long N;

  std::cin >> N;

  long long enemy[N];

  for (long long i = 0; i < N; i++) {
    std::cin >> enemy[i];
  }

  return (EXIT_SUCCESS);
}