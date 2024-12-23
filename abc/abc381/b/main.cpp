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
  int size;

  cin >> S;
  size = S.size();
  if (size % 2 != 0) {
    cout << "No" << endl;
    return (EXIT_SUCCESS);
  }
  for (int i = 0; i < size; i += 2) {
    if (S[i] != S[i + 1]) {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    }
  }
  sort(S.begin(), S.end());
  for (int i = 0; i < size; i += 2) {
    if (S[i] != S[i + 1]) {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    }
    if (i != 0 && S[i] == S[i - 1]) {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    }
  }
  cout << "Yes" << endl;
  return (EXIT_SUCCESS);
}
