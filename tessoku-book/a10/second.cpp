#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;
typedef int_fast32_t fint;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  fint N = 0, D = 0;

  cin >> N;

  vector<fint> A(N, 0), LMax(N, 0), RMax(N, 0);

  for (fint i = 0; i < N; i++) cin >> A[i];
  cin >> D;

  vector<fint> L(D, 0), R(D, 0), result(D, 0);

  for (fint i = 0; i < D; i++) cin >> L[i] >> R[i];
  LMax[0] = A[0];
  RMax[N - 1] = A[N - 1];
  for (fint i = 1; i < N; i++) LMax[i] = max(LMax[i - 1], A[i]);
  for (fint i = N - 2; i >= 0; i--) RMax[i] = max(RMax[i + 1], A[i]);
  for (fint i = 0; i < D; i++) result[i] = max(LMax[L[i] - 2], RMax[R[i]]);
  for (fint i = 0; i < D; i++) cout << result[i] << endl;
  return (EXIT_SUCCESS);
}
