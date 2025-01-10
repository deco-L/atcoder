#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  fint N = 0;

  cin >> N;

  vector<fint> A(N, 0), B(N, 0), dp(N, 0);

  for (fint i = 1; i < N; i++) cin >> A[i];
  for (fint i = 2; i < N; i++) cin >> B[i];
  dp[0] = 0;
  dp[1] = A[1];
  for (fint i = 2; i < N; i++) dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);

  cout << dp[N - 1] << endl;
  return (EXIT_SUCCESS);
}
