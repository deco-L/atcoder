#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, result = 0;
  string S;

  cin >> N >> S;

  for (ll i = 0; i < N - 2; i++) {
    if (S[i] == '#' && S[i + 1] == '.' && S[i + 2] == '#')
      result++;
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
