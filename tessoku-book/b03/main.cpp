#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int_fast16_t N;

  cin >> N;

  vector<int_fast16_t> A(N, 0);

  for (int_fast16_t i = 0; i < N; i++)
    cin >> A[i];

  for (int_fast16_t i = 0; i < N - 2; i++) {
    for (int_fast16_t j = i + 1; j < N - 1; j++) {
      if (A[i] + A[j] > 1000)
        continue ;
      for (int_fast16_t k = j + 1; k < N; k++) {
        if (A[i] + A[j] + A[k] == 1000) {
          cout << "Yes" << endl;
          return (EXIT_SUCCESS);
        }
      }
    }
  }
  cout << "No" << endl;
  return (EXIT_SUCCESS);
}
