#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  std::string S, result;

  cin >> S;
  for (ll i = 0; i < S.length(); i++) {
    if (S[i] != '.')
      result.push_back(S[i]);
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
