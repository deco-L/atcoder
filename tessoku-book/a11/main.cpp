#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

ll search(ll N, ll X, vector<ll> A) {
  ll index = 0, L = 0, R = N - 1;
  while (L <= N) {
    ll M = (L + R) / 2;
    if (A[M] < X) L = M + 1;
    if (A[M] > X) R = M - 1;
    if (A[M] == X) return M + 1;
  }
  return -1;
};

int32_t main(void) {
  ll N, X, result;

  cin >> N >> X;

  vector<ll> A(N, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  result = search(N, X, A);
  cout << result << endl;
  return (EXIT_SUCCESS);
}

// int32_t main(void) {
//   ll N, X;

//   cin >> N >> X;

//   vector<ll> A(N, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];

//   ll L = 0, R = N;
//   bool flag = false;

//   do {
//     ll M = (L + R) / 2;
//     if (A[M - 1] == X) {
//       cout << M << endl;
//       flag = true;
//     }
//     else if (A[M - 1] > X)
//       R = M - 1;
//     else
//       L = M + 1;
//   } while (!flag);
//   return (EXIT_SUCCESS);
// }
