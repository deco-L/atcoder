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

  int N;
  string S;

  cin >> N >> S;

  if (N % 2 != 1) {
    cout << "No" << endl;
    return (EXIT_SUCCESS);
  } else if (N == 1 && S[0] == '/') {
    cout << "Yes" << endl;
    return (EXIT_SUCCESS);
  } else if (N == 1 && S[0] != '/') {
    cout << "No" << endl;
    return (EXIT_SUCCESS);
  }

  int mid = (N + 1) / 2 - 1;
  for (int i = 0; i < N; i++) {
    if (i < mid && S[i] != '1') {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    } else if (i == mid && S[i] != '/') {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    } else if (i > mid && S[i] != '2') {
      cout << "No" << endl;
      return (EXIT_SUCCESS);
    }
  }
  cout << "Yes" << endl;
  return (EXIT_SUCCESS);
}
