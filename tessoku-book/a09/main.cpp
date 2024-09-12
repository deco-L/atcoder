#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll H, W, N;

  cin >> H >> W >> N;

  vector<vector<ll>> sum(H + 2, vector<ll>(W + 2, 0));
  ll A, B, C, D;

  for (ll i = 0; i < N; i++) {
    cin >> A >> B >> C >> D;
    sum[A][B]++;
    sum[C + 1][B]--;
    sum[A][D + 1]--;
    sum[C + 1][D + 1]++;
  }

  for (ll i = 1; i <= H; i++)
    for (ll j = 1; j <= W; j++) {
      sum[i][j] = sum[i][j - 1] + sum[i][j];
      sum[i][j] += sum[i - 1][j];
      if (i > 1 && j > 1) sum[i][j] -= sum[i - 1][j - 1];
    }

  for (ll i = 1; i <= H; i++) {
    for (ll j = 1; j <= W; j++) {
      cout << sum[i][j];
      if (j != W)
        cout << " ";
    }
    cout << endl;
  }
  return (EXIT_SUCCESS);
}

// int32_t main(void) {
//   ll H, W, N;

//   cin >> H >> W >> N;

//   vector<vector<ll>> sum(H + 2, vector<ll>(W + 2, 0));
//   ll A, B, C, D;

//   for (ll i = 0; i < N; i++) {
//     cin >> A >> B >> C >> D;
//     sum[A][B]++;
//     sum[C + 1][B]--;
//     sum[A][D + 1]--;
//     sum[C + 1][D + 1]++;
//   }

//   for (ll i = 1; i <= H; i++)
//     for (ll j = 1; j <= W; j++)
//       sum[i][j] = sum[i][j - 1] + sum[i][j];

//   for (ll j = 1; j <= W; j++)
//     for (ll i = 1; i <= H; i++)
//       sum[i][j] = sum[i - 1][j] + sum[i][j];

//   for (ll i = 1; i <= H; i++) {
//     for (ll j = 1; j <= W; j++) {
//       cout << sum[i][j];
//       if (j != W)
//         cout << " ";
//     }
//     cout << endl;
//   }
//   return (EXIT_SUCCESS);
// }
