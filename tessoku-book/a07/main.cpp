#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

// cumulative sum
int main() {
  ll D, N;
	cin >> D >> N;

  vector<int> L(N, 0), R(N, 0), I_D(D + 1, 0), result(D + 1, 0);
	for (int i = 0; i < N; i++) cin >> L[i] >> R[i];

	for (int i = 0; i < N; i++) {
		I_D[L[i] - 1] += 1;
		I_D[R[i]] -= 1;
	}

	// 累積和をとる → 出力
	for (int d = 1; d <= D; d++) result[d] = result[d - 1] + I_D[d - 1];
	for (int d = 1; d <= D; d++) cout << result[d] << endl;
	return (EXIT_SUCCESS);
}

// global search
// int32_t main(void) {
//   ll D, N;

//   cin >> D >> N;

//   vector<int> number(D, 0);
//   ll L, R;
//   for (ll i = 0; i < N; i++) {
//     cin >> L >> R;
//     for (ll j = 0; j < R - L + 1; j++) {
//       number[L + j - 1]++;
//     }
//   }

//   for (ll i = 0; i < D; i++) cout << number[i] << endl;
//   return (EXIT_SUCCESS);
// }
