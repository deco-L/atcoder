#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;
typedef int_fast32_t fint;

fint binarySearch(vector<fint> A, fint X, fint N) {
  fint result = 0, left = 0, right = N - 1;

  while (left <= right) {
    result = (right + left) / 2;
    if (A[result] == X)
      return (result);
    if (A[result] > X)
      right = result - 1;
    if (A[result] < X)
      left = result + 1;
  }
  return (-1);
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  fint N = 0, X = 0, result = 0;

  cin >> N >> X;

  vector<fint> A(N, 0);

  for (fint i = 0; i < N; i++) cin >> A[i];
  result = binarySearch(A, X, N);
  cout << result + 1 << endl;
  return (EXIT_SUCCESS);
}
