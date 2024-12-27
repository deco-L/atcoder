#include <cstdlib>
#include <stdint.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  cin.tie(nullptr);

  int_fast16_t N;

  cin >> N;

  int_fast32_t bit = 1 << 9;
  while (bit > 0) {
    if (bit & N)
      cout << 1;
    else
      cout << 0;
    bit >>= 1;
  }
  cout << endl;
  return (EXIT_SUCCESS);
}
