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
  cout << A + B << endl;
  return (EXIT_SUCCESS);
}
