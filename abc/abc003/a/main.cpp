#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, sum = 0;

  cin >> N;

  for (ll i = N; i > 0; i--) sum += i;

  cout << sum * 10000 / N << endl;
  return (EXIT_SUCCESS);
}
