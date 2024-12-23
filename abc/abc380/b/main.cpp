#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string S;
  int count = 0;
  bool flag = false;

  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (count && S[i] == '|') {
      if (flag)
        cout << " ";
      cout << count;
      count = 0;
      flag = true;
    } else if (S[i] == '-')
      count++;
  }
  cout << endl;
  return (EXIT_SUCCESS);
}
