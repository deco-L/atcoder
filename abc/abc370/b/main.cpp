#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int main(void) {
  ll N;

  cin >> N;

  ll array[N][N];

  if (N == 1) {
    cin >> array[0][0];
    cout << array[0][0] << endl;
    return (EXIT_SUCCESS);
  }

  for (ll k = 0; k < N; k++) {
    for (ll j = 0; j < k + 1; j++) {
      cin >> array[k][j];
    }
  }

  ll tmp = 0;
  for (ll i = 1; i <= N; i++) {
    if (i == 1) {
      tmp = array[tmp][i - 1];
    } else if (tmp > i) {
      tmp = array[tmp - 1][i - 1];
    } else if (tmp <= i)
      tmp = array[i - 1][tmp - 1];
  }
  cout << tmp << endl;
  return (EXIT_SUCCESS);
}