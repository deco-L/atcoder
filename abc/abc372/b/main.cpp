#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll M;

  cin >> M;

  ll result = 0, nbr = 0;
  vector<ll> A(20, 0);
  ll tmp = 59049, index = 10;
  for (ll j = 0; result != M; j++) {
    while (M - (result + tmp) < 0) {
      tmp /= 3;
      index--;
    }
    result += tmp;
    A[j] = index;
    // for (ll i = 0; i < 11; i++) {
    //   if (i != 0)
    //     tmp *= 3;
    //   if (M - (result + tmp) < 0) {
    //     result += tmp / 3;
    //     A[j] = i - 1;
    //     break ;
    //   }
    // }
    nbr++;
  }
  cout << nbr << endl;
  for (ll i = 0; i < nbr; i++)
    if (i != 0)
      cout << " " << A[i];
    else
      cout << A[i];
  cout << endl;
  return (EXIT_SUCCESS);
}
