#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N;

  cin >> N;

  std::vector<ll> array(N, 0);

  for (ll i = 0; i < N; i++) cin >> array[i];

  for (ll i = 0; i < N; i++) {
    ll tmp = array[i], result = -1;
    for (ll j = 0; j < i / 2 + i % 2; j++) {
      if (tmp == array[i - j - 1]) {
        result = i - j;
        break ;
      }
      if (tmp == array[j]) {
        result = j + 1;
      }
    }
    cout << result;
    if (i != N - 1)
      cout << " ";
  }
  cout << endl;
  return (EXIT_SUCCESS);
}
