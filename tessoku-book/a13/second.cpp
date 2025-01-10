#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

// binary search
// int32_t main(void) {
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
//   ll N = 0, K = 0, ans = 0;

//   cin >> N >> K;

//   vector<ll> A(N, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];
//   for (ll i = 0; i < N; i++)
//     ans += lower_bound(A.begin(), A.end(), A[i] + K + 1) - (A.begin() + i + 1);
//   cout << ans << endl;
//   return (EXIT_SUCCESS);
// }

// two pointer approach
int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0, K = 0, ans = 0;

  cin >> N >> K;

  vector<ll> A(N, 0), tmp(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N - 1; i++) {
    if (i == 0) tmp[i] = 0;
    else tmp[i] = tmp[i - 1];

    while (tmp[i] < N && A[tmp[i]] - A[i] <= K)
      tmp[i]++;
  }
  for (ll i = 0; i < N; i++) ans += (tmp[i] - i);
  cout << ans << endl;
  return (EXIT_SUCCESS);
}
