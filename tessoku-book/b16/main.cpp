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

  vector<fint> h(N, 0);
  vector<ll> dp(N, 0);

  for (fint i = 0; i < N; i++) cin >> h[i];
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for (fint i = 2; i < N; i++)
    dp[i] = min(
      dp[i - 1] + abs(h[i] - h[i - 1]),
      dp[i - 2] + abs(h[i] - h[i - 2])
    );
  cout << dp[N - 1] << endl;
  return (EXIT_SUCCESS);
}
