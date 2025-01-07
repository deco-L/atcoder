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

  cin >> N;

  vector<fint> A(N, 0), cSum(N + 1, 0);

  for (fint i = 0; i < N; i++) {
    cin >> A[i];
    cSum[i + 1] = cSum[i] + A[i];
  }
  cin >> Q;

  vector<fint> L(Q, 0), R(Q, 0);

  for (fint i = 0; i < Q; i++) cin >> L[i] >> R[i];
  for (fint i = 0; i < Q; i++) {
    fint tmp = R[i] - L[i] + 1, splitCSum = cSum[R[i]] - cSum[L[i] - 1];

    if (tmp % 2 == 0 && tmp / 2 == splitCSum)
      cout << "draw" << endl;
    else if (tmp / 2 < splitCSum)
      cout << "win" << endl;
    else
      cout << "lose" << endl;
  }
  return (EXIT_SUCCESS);
}
