#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

static bool binarySearch(ll N, ll K, vector<ll> AB, vector<ll> CD) {
  for (ll i = 0; i < N; i++) {
    ll pos = lower_bound(CD.begin(), CD.end(), K - AB[i]) - CD.begin();

    if (CD[pos] == K - AB[i])
      return (true);
  }
  return (false);
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0, K = 0;

  cin >> N >> K;

  vector<ll> A(N, 0), B(N, 0), C(N, 0), D(N, 0), AB(N * N, 0), CD(N * N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N; i++) cin >> B[i];
  for (ll i = 0; i < N; i++) cin >> C[i];
  for (ll i = 0; i < N; i++) cin >> D[i];
  for (ll i = 0; i < N; i++)
    for (ll j = 0; j < N; j++)
      AB[i * N + j] = A[i] + B[j];
  for (ll i = 0; i < N; i++)
    for (ll j = 0; j < N; j++)
      CD[i * N + j] = C[i] + D[j];
  sort(CD.begin(), CD.end());
  if (binarySearch(N * N, K, AB, CD))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (EXIT_SUCCESS);
}
