#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll X, Y;

  cin >> X >> Y;
  if (X > Y)
    cout << X << endl;
  else
    cout << Y << endl;
  return (EXIT_SUCCESS);
}
