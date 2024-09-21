#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, Q, count = 0;
  std::string S;

  cin >> N >> Q >> S;

  vector<ll> array(Q, 0);
  std::string in(Q, '0');

  for (ll i = 0; i < Q; i++) cin >> array[i] >> in[i];

  for (ll i = 0; i < Q; i++) {
    ll flag = 0, start = 0;
    count = 0;
    S[array[i] - 1] = in[i];
    
    while ((flag = S.find("ABC", start)) != std::string::npos) {
      count++;
      start = flag + 3;
    }
    cout << count << endl;
  }
  return (EXIT_SUCCESS);
}
