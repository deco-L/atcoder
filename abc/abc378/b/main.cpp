#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, Q;

  cin >> N;

  std::vector<ll> q(N, 0), r(N, 0);

  for (ll i = 0; i < N; i++) cin >> q[i] >> r[i];

  cin >> Q;

  std::vector<ll> t(Q, 0), d(Q, 0);

  for (ll i = 0; i < Q; i++) cin >> t[i] >> d[i];

  for (ll i = 0; i < Q; i++) {
    ll result = 0, tmp = 0;
    tmp = (d[i] / q[t[i] - 1]) * q[t[i] - 1] + r[t[i] - 1];
    if (tmp >= d[i])
      cout << tmp << endl;
    else
      cout << tmp + q[t[i] - 1] << endl;
  }
  return (EXIT_SUCCESS);
}
