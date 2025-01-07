#include <cstdlib>
#include <cstdint>
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

  fint H = 0, W = 0, N = 0;

  cin >> H >> W >> N;

  vector<vector<fint>> cCrood(H + 2, vector<fint>(W + 2, 0));

  for (fint i = 0; i < N; i++) {
    fint A = 0, B = 0, C = 0, D = 0;

    cin >> A >> B >> C >> D;
    cCrood[A][B]++;
    cCrood[C + 1][D + 1]++;
    cCrood[A][D + 1]--;
    cCrood[C + 1][B]--;
  }
  for (fint i = 0; i <= H; i++) {
    for (fint j = 0; j <= W; j++) {
      cCrood[i + 1][j + 1] += cCrood[i + 1][j];
      if (i > 0) cCrood[i + 1][j + 1] += cCrood[i][j + 1];
      if (i > 0 && j > 0) cCrood[i + 1][j + 1] -= cCrood[i][j];
    }
  }
  for (fint i = 0; i < H; i++) {
    for (fint j = 0; j < W; j++) {
      if (j != 0)
        cout << ' ';
      cout << cCrood[i + 1][j + 1];
    }
    cout << endl;
  }
  return (EXIT_SUCCESS);
}
