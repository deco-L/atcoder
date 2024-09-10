#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, K, result;
  cin >> N >> K;

  result = 0;
  for (ll i = 1; i <= N; i++) {
    for (ll j = 1; j <= N; j++) {
      if (0 < K - (i + j) && K - (i + j) <= N)
        result++;
    }
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
