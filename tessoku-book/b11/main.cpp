#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;
typedef int_fast64_t ll;
typedef int_fast32_t fint;

static fint binarySearch(fint N, vector<fint> A, fint X) {
  fint mid = 0, L = 0, R = N;

  while (L < R) {
    mid = (L + R) / 2;
    if (A[mid] < X) L = mid + 1;
    else R = mid;
  }
  return (L);
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  fint N = 0, Q = 0;

  cin >> N;

  vector<fint> A(N, 0);

  for (fint i = 0; i < N; i++) cin >> A[i];

  cin >> Q;

  vector<fint> X(Q, 0), result(Q, 0);

  for (fint i = 0; i < Q; i++) cin >> X[i];
  sort(A.begin(), A.end());
  // for (fint i = 0; i < Q; i++) result[i] = binarySearch(N, A, X[i]);
  for (fint i = 0; i < Q; i++) {
    result[i] = lower_bound(A.begin(), A.end(), X[i]) - A.begin();
  }
  for (fint i = 0; i < Q; i++) cout << result[i] << endl;
  return (EXIT_SUCCESS);
}

// zennzennkannkeinai code kaiteta w
// static fint binarySearch(fint N, vector<pair<fint, fint>> A, fint X) {
//   fint index = 0, L = 0, R = N- 1;

//   while (L <= R) {
//     index = (R + L) / 2;
//     if (A[index].second < X)
//       L = index + 1;
//     else if (A[index].second > X)
//       R = index - 1;
//     else return (A[index].first);
//   }
//   return (A[index].first);
// }

// int32_t main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   fint N = 0, Q = 0;

//   cin >> N;

//   vector<pair<fint, fint>> A(N, pair<fint, fint>(0, 0));

//   for (fint i = 0; i < N; i++) {
//     A[i].first = i + 1;
//     cin >> A[i].second;
//   }
//   cin >> Q;

//   vector<fint> X(Q, 0), result(Q, 0);

//   for (fint i = 0; i < Q; i++) cin >> X[i];
//   sort(A.begin(), A.end(), [](const pair<fint, fint>& a, const pair<fint, fint>& b) {
//     return a.second < b.second;
//   });
//   for (fint i = 0; i < Q; i++) result[i] = binarySearch(N, A, X[i]);
//   for (fint i = 0; i < Q; i++) cout << result[i] << endl;
//   return (EXIT_SUCCESS);
// }
