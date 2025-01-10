#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

static bool binarySearch(ll bSize, ll K, vector<ll> A, vector<ll> B) {
  for (ll i = 0; i < bSize; i++) {
    ll pos = lower_bound(A.begin(), A.end(), K - B[i]) - A.begin();

    if (A[pos] == K - B[i])
      return (true);
  }
  return (false);
}

static vector<ll> enumerate(vector<ll> A) {
  vector<ll> result;

  for (ll i = 0; i < (1 << A.size()); i++) {
    ll sum = 0;

    for (ll j = 0; j < (ll)A.size(); j++)
      if (i & (1 << j)) sum += A[j];
    result.push_back(sum);
  }
  return (result);
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0, K = 0;

  cin >> N >> K;

  vector<ll> A(N, 0), front, back, fCom, bCom;

  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N / 2; i++) front.push_back(A[i]);
  for (ll i = N / 2; i < N; i++) back.push_back(A[i]);
  fCom = enumerate(front);
  bCom = enumerate(back);
  sort(fCom.begin(), fCom.end());
  sort(bCom.begin(), bCom.end());
  if (binarySearch(bCom.size(), K, fCom, bCom))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (EXIT_SUCCESS);
}
