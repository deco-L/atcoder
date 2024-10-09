#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  std::string str;

  cin >> str;
  for (ll i = 0; i < str.length(); i++) {
    if (str[i] != 'a' && str[i] != 'i' && str[i] != 'u' && str[i] != 'e' && str[i] != 'o')
      cout << str[i];
  }
  cout << endl;
  return (EXIT_SUCCESS);
}
