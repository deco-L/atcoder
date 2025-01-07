#include <cstdlib>
#include <stdint.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N = 0, Q = 0;

  cin >> N >> Q;

  vector<int> A(N, 0), cSum(N + 1, 0), L(Q, 0), R(Q, 0);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    cSum[i + 1] = cSum[i] + A[i];
  }
  for (int i = 0; i < Q; i++) cin >> L[i] >> R[i];
  for (int i = 0; i < Q; i++)
    cout << cSum[R[i]] - cSum[L[i] - 1] << endl;
  return (EXIT_SUCCESS);
}
