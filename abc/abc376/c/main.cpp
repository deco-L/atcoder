#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, result, flag = 0;

  cin >> N;

  vector<ll> A(N, 0), B(N - 1, 0);

  for (ll i = 0; i < N; i++) cin >> A[i];
  for (ll i = 0; i < N - 1; i++) cin >> B[i];
  sort(A.begin(), A.end(), greater<ll>());
  sort(B.begin(), B.end(), greater<ll>());
  for (ll i = 0; i < N - 1; i++) {
    if (flag && A[i + 1] > B[i]) {
      flag++;
    }
    if (A[i] > B[i] && !flag) {
      result = A[i];
      flag++;
    }
    if (flag > 1 || (result == A[N - 2] && A[N - 1] > B[N - 2])) {
      cout << -1 << endl;
      return(EXIT_SUCCESS);
    }
  }
  if (!flag)
    cout << A[N - 1] << endl;
  else
    cout << result << endl;
  return (EXIT_SUCCESS);
}
