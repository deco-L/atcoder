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

  int_fast16_t A, B;

  cin >> A >> B;
  if (50 < A && A < 100 && B != 100) {
    cout << "No" << endl;
    return (EXIT_SUCCESS);
  }
  for (int_fast16_t nbr = A; nbr <= B; nbr++) {
    if (100 % nbr == 0) {
      cout << "Yes" << endl;
      return (EXIT_SUCCESS);
    }
  }
  cout << "No" << endl;
  return (EXIT_SUCCESS);
}
