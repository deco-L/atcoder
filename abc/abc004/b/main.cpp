#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  vector<string> array(16, "");

  for (ll i = 0; i < 16; i++) cin >> array[i];
  for (ll i = 3; i >= 0; i-- ) {
    for (ll j = 3; j >= 0; j--) {
      cout << array[i * 4 + j];
      if (j != 0)
        cout << " ";
    }
    cout << endl;
  }
  return (EXIT_SUCCESS);
}
