#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, X;
  bool flag = false;

  cin >> N >> X;

  ll array[N];

  for (ll i = 0; i < N; i++) {
    cin >> array[i];
    if (array[i] == X)
      flag = true;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (EXIT_SUCCESS);
}
