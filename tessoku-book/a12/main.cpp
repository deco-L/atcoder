#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

ll search(ll N, ll K, vector<ll> A) {
    ll sum = 0, L = 1, R = 100000000, M;
  while (L < R) {
    sum = 0;
    M = (L + R) / 2;
    for (ll i = 0; i < N; i++) sum+= M / A[i];
    if (sum >= K) R = M;
    else if (sum < K) L = M + 1;
  }
  return L;
}

int32_t main(void) {
  ll N, K;

  cin >> N >> K;

  vector<ll> A(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  cout << search(N, K, A) << endl;
  return (EXIT_SUCCESS);
}
