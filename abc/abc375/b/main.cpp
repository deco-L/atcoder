#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N;
  double r = 0.0;

  cin >> N;

  ll A = 0, B = 0, X, Y;
  for (ll i = 0; i < N; i++) {
    cin >> X >> Y;
    r += sqrt((pow(X - A, 2) + pow(Y - B, 2)));
    A = X;
    B = Y;
  }
  r += sqrt((pow(X, 2) + pow(Y, 2)));
  cout << fixed << setprecision(20) << r << endl;
  return (EXIT_SUCCESS);
}
