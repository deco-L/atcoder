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

  vector<ll>  A(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];

  ll D;

  cin >> D;

  vector<ll> L(D, 0), R(D, 0), P(N, 0), Q(N, 0);

  for (ll i = 0; i < D; i++) cin >> L[i] >> R[i];
  P[0] = A[0];
  for (ll i = 1; i < N; i++) P[i] = max(P[i - 1], A[i]);
  Q[N - 1] = A[N - 1];
  for (ll i = N - 2; i >= 0; i--) Q[i] = max(Q[i + 1], A[i]);

  for (ll i = 0; i < D; i++) cout << max(P[L[i] - 2], Q[R[i]]) << endl;
  return (EXIT_SUCCESS);
}
