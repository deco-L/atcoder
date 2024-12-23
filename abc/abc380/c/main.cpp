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

  int N = 0, K = 0;
  string S;

  cin >> N >> K >> S;

  vector<int> counts(N / 2 + 1, 0);
  int count = 0;

  for (int i = 0; i < N; i++) {
    if (i == 0 && S[i] == '1')
      count++;
    if (i != 0 && S[i - 1] == '0' && S[i] == '1')
      count++;
    if (count && S[i] == '1')
      counts[count]++;
  }

  string result(N, 0);

  count = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0 && S[i] == '1')
      count++;
    if (i != 0 && S[i - 1] == '0' && S[i] == '1')
      count++;
    if (count == K - 1 && S[i] == '0' && counts[K]-- > 0)
      result[i] = '1';
    else if (count == K && S[i] == '1' && counts[K]-- > 0)
      result[i] = '1';
    else if (count == K && S[i] == '1')
      result[i] = '0';
    else
      result[i] = S[i];
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}
