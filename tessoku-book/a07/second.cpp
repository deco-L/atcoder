#include <cstdint>
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

  fint D = 0, N = 0;

  cin >> D >> N;

  vector<fint> cSum(D + 2, 0), L(N, 0), R(N, 0);

  for (fint i = 0; i < N; i++) cin >> L[i] >> R[i];
  for (fint i = 0; i < N; i++) {
    cSum[L[i]]++;
    cSum[R[i] + 1]--;
  }
  for (fint i = 0; i < D; i++) cSum[i + 1] += cSum[i];
  for (fint i = 1; i <= D; i++) cout << cSum[i] << endl;
  return (EXIT_SUCCESS);
}
