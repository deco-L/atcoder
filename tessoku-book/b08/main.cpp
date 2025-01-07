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

  fint N = 0, Q = 0;
  vector<vector<fint>> coord(1500, vector<fint>(1500, 0)),
                        cCoord(1500 + 1, vector<fint>(1500 + 1, 0));

  cin >> N;
  for (fint i = 0; i < N; i++) {
    fint X = 0, Y = 0;

    cin >> X >> Y;
    coord[Y - 1][X - 1]++;
  }
  cin >> Q;

  vector<fint> a(Q, 0), b(Q, 0), c(Q, 0), d(Q, 0), result(Q, 0);

  for (fint i = 0; i < Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
  for (fint i = 0; i < 1500; i++) {
    for (fint j = 0; j < 1500; j++) {
      cCoord[i + 1][j + 1] = cCoord[i + 1][j] + coord[i][j];
      if (i > 0) cCoord[i + 1][j + 1] += cCoord[i][j + 1];
      if (i > 0 && j > 0) cCoord[i + 1][j + 1] -= cCoord[i][j];
    }
  }
  for (fint i = 0; i < Q; i++)
    result[i] = cCoord[d[i]][c[i]] - (
      cCoord[d[i]][a[i] - 1]
      + cCoord[b[i] - 1][c[i]]
      - cCoord[b[i] - 1][a[i] - 1]
    );
  for (fint i = 0; i < Q; i++) cout << result[i] << endl;
  return (EXIT_SUCCESS);
}
