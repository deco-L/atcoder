#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

bool checkAtcoder(char c) {
  return (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r');
}

int32_t main(void) {
  string S, T;

  cin >> S >> T;
  for (ll i = 0; i < S.length(); i++) {
    if (S.at(i) != T.at(i) && S.at(i) == '@' && !checkAtcoder(T.at(i))) {
      cout << "You will lose" << endl;
      return (EXIT_SUCCESS);
    }
    else if (S.at(i) != T.at(i) && T.at(i) == '@' && !checkAtcoder(S.at(i))) {
      cout << "You will lose" << endl;
      return (EXIT_SUCCESS);
    }
    else if (S.at(i) != T.at(i) && S.at(i) != '@' && T.at(i) != '@') {
      cout << "You will lose" << endl;
      return (EXIT_SUCCESS);
    }
  }
  cout << "You can win" << endl;
  return (EXIT_SUCCESS);
}
