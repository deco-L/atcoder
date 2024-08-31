#include <iostream>
#include <cstdlib>

int main(void) {
  long long N, result, count;

  N = 0;
  result = 0;
  count = 0;
  std::cin >> N;
  long long array[N], difference[N - 1];
  result = N + N - 1;
  for (long long index = 0; index < N; index++) {
    std::cin >> array[index];
    if (index > 0)
      difference[index - 1] = array[index] - array[index - 1];
  }
  if (N == 1) {
    std::cout << 1;
    return (0);
  }
  for (long long index = 1; index < N - 1; index++) {
    if (difference[index] == difference[index - 1]) {
      count++;
      result++;
    } else
      count = 0;
    if (count > 1)
      result += count - 1;
  }
  std::cout << result;
  return (EXIT_SUCCESS);
}