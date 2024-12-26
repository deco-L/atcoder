#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int_fast16_t N, X, tmp;

  cin >> N >> X;

  for (int16_t i = 0; i < N; i++) {
    cin >> tmp;
    if (X == tmp) {
      cout << "Yes" << endl;
      return (EXIT_SUCCESS);
    }
  }
  cout << "No" << endl;
  return (EXIT_SUCCESS);
}
