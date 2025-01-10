#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

// binary search
// int32_t main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   ll N = 0, K = 0, ans = 0;

//   cin >> N >> K;

//   vector<ll> A(N, 0), cA(N + 1, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];
//   for (ll i = 0; i < N; i++) cA[i + 1] += cA[i] + A[i];
//   for (ll i = 1; i <= N; i++)
//     ans += lower_bound(
//       cA.begin(),
//       cA.end(),
//       cA[i] + K - A[i - 1] + 1) - (cA.begin() + i
//     );
//   cout << ans << endl;
//   return (EXIT_SUCCESS);
// }

// Two Pointer Approach
int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0, K = 0, ans = 0;

  cin >> N >> K;

  vector<ll> A(N, 0), cA(N + 1, 0), tmp(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N; i++) cA[i + 1] += cA[i] + A[i];
  for (ll i = 0; i < N; i++) {
    if (i == 0) tmp[i] = 0;
    else tmp[i] = tmp[i - 1];

    while (tmp[i] < N && cA[tmp[i] + 1] - cA[i] <= K)
      tmp[i]++;
  }
  for (ll i = 0; i < N; i++) ans += (tmp[i] - i);
  cout << ans << endl;
  return (EXIT_SUCCESS);
}
