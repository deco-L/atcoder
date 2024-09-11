#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll H, W;

  cin >> H >> W;

  vector<vector<ll>> X(H, vector<ll>(W, 0));
  vector<vector<ll>> sumW(H, vector<ll>(W + 1, 0));

  for (ll i = 0; i < H; i++)
    for (ll j = 0; j < W; j++) cin >> X[i][j];

  for (ll i = 0; i < H; i++)
    for (ll j = 1; j <= W; j++) sumW[i][j] = sumW[i][j - 1] + X[i][j - 1];

  ll Q, A, B, C, D;

  cin >> Q;

  vector<ll> result(Q, 0);
  for (ll i = 0; i < Q; i++) {
    cin >> A >> B >> C >> D;
    for (ll j = 0; j <= C - A; j++) {
      result[i] = result[i] + sumW[j + A - 1][D] - sumW[j + A - 1][B - 1];
    }
    cout << result[i] << endl;
  }
  return (EXIT_SUCCESS);
}
