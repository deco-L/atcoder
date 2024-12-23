#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, C, nbr = 0, tmp = 0;

  cin >> N >> C;

  for (ll i = 0; i < N; i++) {
    ll T;

    cin >> T;
    if (T - tmp >= C || i == 0) {
      nbr++;
      tmp = T;
    }
  }
  cout << nbr << endl;
  return (EXIT_SUCCESS);
}
