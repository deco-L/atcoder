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

  fint H = 0, W = 0, Q = 0;

  cin >> H >> W;

  vector<vector<fint>> X(H, vector<fint>(W, 0)),
                        cTwoArray(H + 1, vector<fint>(W + 1, 0));

  for (fint i = 0; i < H; i++)
    for (fint j = 0; j < W; j++)
      cin >> X[i][j];

  cin >> Q;

  vector<fint> A(Q, 0), B(Q, 0), C(Q, 0), D(Q, 0), result(Q, 0);

  for (fint i = 0; i < Q; i++)  cin >> A[i] >> B[i] >> C[i] >> D[i];
  for (fint i = 0; i < H; i++) {
    for (fint j = 0; j < W; j++) {
      cTwoArray[i + 1][j + 1] = cTwoArray[i + 1][j] + X[i][j];
      if (i > 0) cTwoArray[i + 1][j + 1] += cTwoArray[i][j + 1];
      if (i > 0 && j > 0) cTwoArray[i + 1][j + 1] -= cTwoArray[i][j];
    }
  }
  for (fint i = 0; i < Q; i++)
    result[i] = cTwoArray[C[i]][D[i]] -
    (
      cTwoArray[C[i]][B[i] - 1]
      + cTwoArray[A[i] - 1][D[i]]
      - cTwoArray[A[i] - 1][B[i] - 1]
    );
  for (fint i = 0; i < Q; i++)
    cout << result[i] << endl;
  return (EXIT_SUCCESS);
}

// int32_t main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   fint H = 0, W = 0, Q = 0;

//   cin >> H >> W;

//   vector<vector<fint>> TwoArray(H, vector<fint>(W, 0)),
//                         cTwoArray(H + 1, vector<fint>(W + 1, 0));

//   for (fint i = 0; i < H; i++)
//     for (fint j = 0; j < W; j++)
//       cin >> TwoArray[i][j];
//   cin >> Q;

//   vector<fint> A(Q, 0), B(Q, 0), C(Q, 0), D(Q, 0), result(Q, 0);

//   for (fint i = 0; i < Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

//   for (fint i = 0; i < H; i++)
//     for (fint j = 0; j < W; j++)
//       cTwoArray[i + 1][j + 1] = cTwoArray[i + 1][j] + TwoArray[i][j];
//   for (fint i = 0; i < W; i++)
//     for (fint j = 0; j < H; j++)
//       cTwoArray[j + 1][i + 1] += cTwoArray[j][i + 1];

//   for (fint i = 0; i < Q; i++)
//     result[i] = cTwoArray[C[i]][D[i]]
//     - (
//       cTwoArray[C[i]][B[i] - 1]
//       + cTwoArray[A[i] - 1][D[i]]
//       - cTwoArray[A[i] - 1][B[i] - 1]
//     );
//   for (fint i = 0; i < Q; i++) cout << result[i] << endl;
//   return (EXIT_SUCCESS);
// }
