#include <cstdlib>
#include <stdint.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N = 0, K = 0;
  cin >> N >> K;

  int count = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (0 < K - (i + j) && K - (i + j) <= N)
        count++;
    }
  }
  cout << count << endl;
  return (EXIT_SUCCESS);
}
