#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, Q, nbr = 0, flag = 0;

  cin >> N >> Q;

  vector<ll> array(N, 0);
  for (ll i = 0; i < N; i++) {
    array[i] == i + 1;
  }
  vector<ll>::iterator start = array.begin();
  vector<ll>::iterator end = array.end();
  vector<ll>::iterator L = array.begin();
  vector<ll>::iterator R = array.begin() + 1;
  vector<ll>::iterator itr;
  vector<ll>::iterator itl;
  vector<ll>::iterator another;
  for (ll i = 0; i < Q; i++) {
    flag = 0;
    std::string S;
    ll T;
    cin >> S >> T;
    if (S == "R") {
      itr = itl = R;
      another = L;
    } else {
      itr = itl = L;
      another = R;
    }
    while ((!flag && (*itr == T || *itl == T)) || (flag == 1 && *itl == T) || (flag == 2 && *itr == T)) {
      if (itl == start)
        itl = end;
      else if (itr == end)
        itr = start;
      else {
        itl--;
        itr++;
      }
      if (itr == another)
        flag = 1;
      if (itl == another)
        flag = 2;
      if (!flag && S == "R" && *itr == T)
        R = itr;
      else if (!flag && S == "R" && *itl == T)
        R = itl;
      else if (!flag && S == "L" && *itr == T)
        L = itr;
      else if (!flag && S == "L" && *itl == T)
        L = itl;
      nbr++;
    }
    if (S == "R" && flag == 1)
      R = itl;
    if (S == "L" && flag == 1)
      L = itl;
    if (S == "R" && flag == 2)
      R = itr;
    if (S == "L" && flag == 2)
      L = itr;
  }
  cout << nbr << endl;
  return (EXIT_SUCCESS);
}
