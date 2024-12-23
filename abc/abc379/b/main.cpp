#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  ll count = 0, result = 0;
  for (ll i = 0; i < S.size(); i++) {
    if (S[i] == 'O')
      count++;
    if (S[i] == 'X')
      count = 0;
    if (count == K) {
      count = 0;
      result++;
    }
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
