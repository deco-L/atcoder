#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int main(void) {
  ll  L, R;

  cin >> L >> R;
  if (L == 1 && R == 1) {
    cout << "Invalid" << endl;
    return (EXIT_SUCCESS);
  } else if (L == 1) {
    cout << "Yes" << endl;
    return (EXIT_SUCCESS);
  } else if (L == 0 && R == 0) {
    cout << "Invalid" << endl;
    return (EXIT_SUCCESS);
  } else {
    cout << "No" << endl;
    return (EXIT_SUCCESS);
  }
  return (EXIT_SUCCESS);
}