#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

//Two Pointer Approach
int32_t main(void) {
  ll N, K;
  cin >> N >> K;

  vector<ll> A(N, 0), R(N, 0);
  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N - 1; i++) {
    if (i == 0) R[i] = 0;
    else R[i] = R[i - 1];

    while (R[i] < N - 1 && A[R[i] + 1] - A[i] <= K)
      R[i]++;
  }

  ll result = 0;
  for (ll i = 0; i < N - 1; i++) result += R[i] - i;
  cout << result << endl;
}

// dichotomous search
// ll search(ll N, ll K, vector<ll> A) {
//   ll result = 0;

//   for (int i = 0; i < N - 1; i++) {
//     ll L = i, R = N - 1, M = (L + R) / 2;
//     while (L <= R) {
//       M = (L + R) / 2;
//       if (A[M] - A[i] <= K) L = M + 1;
//       else if (A[M] - A[i] > K) R = M - 1;
//     }
//     result += R - i;
//   }
//   return (result);
// }

// int32_t main(void) {
//   ll N, K;

//   cin >> N >> K;

//   vector<ll> A(N, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];

//   ll result = 0;
//   result = search(N, K, A);
//   cout << result << endl;
//   return (EXIT_SUCCESS);
// }
