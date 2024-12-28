#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int32_t N;

  cin >> N;

  int32_t pow_two = 1, result = 0;

  while (N > 0) {
    result += (N % 10) * pow_two;
    N /= 10;
    pow_two *= 2;
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
