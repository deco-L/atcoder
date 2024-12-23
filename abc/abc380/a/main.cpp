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

  cin >> N;

  ll one = 0, two = 0, three = 0;
  while (N > 0) {
    ll tmp = N % 10;
    if (tmp == 1)
      one++;
    else if (tmp == 2)
      two++;
    else if (tmp == 3)
      three++;
    N /= 10;
  }
  if (one == 1 && two == 2 && three == 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return (EXIT_SUCCESS);
}

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   string s=to_string(n);
//   sort(s.begin(),s.end());
//   if(s=="122333"){cout << "Yes\n";}
//   else{cout << "No\n";}
//   return 0;
// }
