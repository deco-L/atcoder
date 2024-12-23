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

  ll N;
  string S;

  cin >> N >> S;

  ll cnt_one = 0, cnt_two = 0, cnt = 0;
  for (ll i = 0; i < N; i++) {
    if (S[i] == '1') {
      while (S[i] == '1') {
        cnt_one++;
        i++;
      }
      if (S[i] == '/') {
        i++;
        while (S[i] == '2') {
          i++;
          cnt_two++;
        }
        ll tmp = 0;
        if (cnt_one <= cnt_two)
          tmp = cnt_one * 2 + 1;
        else
          tmp = cnt_two * 2 + 1;
        if (cnt < tmp)
          cnt = tmp;
      }
      i--;
    }
    if (S[i] == '/' && cnt == 0)
      cnt = 1;
    cnt_one = 0;
    cnt_two = 0;
  }
  cout << cnt << endl;
  return (EXIT_SUCCESS);
}
