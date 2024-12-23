#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll count = 0;
  std::vector<ll> array(4, 0);

  for (ll i = 0; i < 4; i++) {
    cin >> array[i];
  }
  sort(array.begin(), array.end());
  for (ll i = 0; i < 3; i++) {
    if (array[i] == array[i + 1]) {
      count++;
      i++;
    }
  }
  cout << count << endl;
  return (EXIT_SUCCESS);
}
