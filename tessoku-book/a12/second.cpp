#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

static bool check(ll N, ll K, vector<ll> A, ll mid) {
  ll sum = 0;

  for (ll i = 0; i < N; i++) sum += mid / A[i];
  if (sum >= K)
    return (false);
  else
    return (true);
}

static ll binarySearch(ll N, ll K, vector<ll> A) {
  ll L = 1, R = 1000000000, mid = 0;

  while (L < R) {
    mid = (L + R) / 2;
    if (check(N, K, A, mid))
      L = mid + 1;
    else
      R = mid;
  }
  return (R);
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0, K = 0, ans = 0;

  cin >> N >> K;

  vector<ll> A(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  ans = binarySearch(N, K, A);
  cout << ans << endl;
  return (EXIT_SUCCESS);
}
