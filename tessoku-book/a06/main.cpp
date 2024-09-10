#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, Q;

  cin >> N >> Q;

  vector<int> A(N, 0), prefixSum(N + 1, 0);
  for (ll i = 0; i < N; i++) {
    ll value;

    cin >> A[i];
    prefixSum[i + 1] = prefixSum[i] + A[i];
  }

  ll L, R;
  for (ll i = 0; i < Q; i++) {
    cin >> L >> R;
    cout << prefixSum[R] - prefixSum[L - 1] << endl;
  }
  return (EXIT_SUCCESS);
}

// timeout
// int32_t main(void) {
//   ll N, Q;

//   cin >> N >> Q;

//   vector<int> A;
//   A.reserve(N);
//   for (ll i = 0; i < N; i++) {
//     ll value;

//     cin >> value;
//     A.push_back(value);
//   }

//   ll L, R;
//   for (ll i = 0; i < Q; i++) {
//     cin >> L >> R;
//     cout << accumulate(A.begin() + L - 1, A.begin() + R, 0LL) << endl;
//   }
//   return (EXIT_SUCCESS);
// }

// timeout
// int32_t main(void) {
//   ll N, Q;

//   cin >> N >> Q;
//   ll A[N], result, L, R, space;

//   for (ll index = 0; index < N; index++) cin >> A[index];
//   for (ll i = 0; i < Q; i++) {
//     result = 0;
//     cin >> L >> R;
//     space = R - L;
//     for (ll j = 0; j <= space; j++) result += A[j + L - 1];
//     cout << result << endl;
//   }
//   return (EXIT_SUCCESS);
// }
