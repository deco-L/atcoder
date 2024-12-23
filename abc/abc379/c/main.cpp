#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, M, count = 0;

  cin >> N >> M;

  vector<ll> X(M + 1, 0), A(M + 1, 0);

  for (ll i = 0; i < M; i++) {
    cin >> X[i];
  }
  for (ll i = 0; i < M; i++) {
    cin >> A[i];
  }
  X[M] = N + 1;

  ll tmp = 0;
  for (ll i = 0; i < M; i++) {
    tmp = A[i] - (X[i + 1] - X[i]);
    if ((X[i + 1] - X[i]) - A[i] < 0) {
      cout << -1 << endl;
      return (EXIT_SUCCESS);
    }
    if (tmp < 0) {
      cout << -1 << endl;
      return (EXIT_SUCCESS);
    }
    A[i + 1] += tmp;
  }
  cout << count << endl;
  return (EXIT_SUCCESS);
}
