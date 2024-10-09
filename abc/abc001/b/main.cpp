#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll m;

  cin >> m;
  if (m < 100)
    cout << 0 << 0 << endl;
  else if (100 <= m && m < 1000)
    cout << 0 << m / 100 << endl;
  else if (1000 <= m && m <= 5000)
    cout << m / 100 << endl;
  else if (6000 <= m && m <= 30000)
    cout << m / 1000 + 50 << endl;
  else if (35000 <= m && m <= 70000)
    cout << (m / 1000 - 30) / 5 + 80 << endl;
  else if (m > 70000)
    cout << 89 << endl;
  return (EXIT_SUCCESS);
}
