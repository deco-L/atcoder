#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

#include <iostream>
#include <vector>
#include <set>

using namespace std;
typedef int_fast64_t ll;



// improved backtracking method
// bool findSum(ll N, ll K, const vector<ll>& A, const vector<ll>& B, const vector<ll>& C, const vector<ll>& D) {
//   set<ll> sumsAB;
//   for (ll i = 0; i < N; ++i) {
//     for (ll j = 0; j < N; ++j) {
//       sumsAB.insert(A[i] + B[j]);
//     }
//   }

//   for (ll i = 0; i < N; ++i) {
//     for (ll j = 0; j < N; ++j) {
//       ll target = K - (C[i] + D[j]);
//       if (sumsAB.find(target) != sumsAB.end()) {
//         return true;
//       }
//     }
//   }

//   return false;
// }

// int32_t main(void) {
//   ll N, K;

//   cin >> N >> K;

//   vector<ll> A(N, 0), B(N, 0), C(N, 0), D(N, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];
//   for (ll i = 0; i < N; i++) cin >> B[i];
//   for (ll i = 0; i < N; i++) cin >> C[i];
//   for (ll i = 0; i < N; i++) cin >> D[i];

//   if (findSum(N, K, A, B, C, D)) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

//   return 0;
// }


// backtrack
// void backtrack(ll sum, ll N, ll K, ll index, vector<ll>& A, vector<ll>& B, vector<ll>& C, vector<ll>& D) {
//   if (sum == K && index == 4) {
//     std::cout << "Yes" << std::endl;
//     std::exit(EXIT_SUCCESS);
//   } else if (index == 4 && sum != 4)
//     return ;
//   std::vector<ll> tmp;
//   if (index == 0)
//     tmp = A;
//   else if (index == 1)
//     tmp = B;
//   else if (index == 2)
//     tmp = C;
//   else if (index == 3)
//     tmp = D;
//   for (ll i = 0; i < N; i++) {
//     if (sum + tmp[i] > K)
//       continue ;
//     backtrack(sum + tmp[i], N, K, index + 1, A, B, C, D);
//   }
//   return ;
// }

// int32_t main(void) {
//   ll N, K;

//   cin >> N >> K;

//   vector<ll> A(N, 0), B(N, 0), C(N, 0), D(N, 0);

//   for (ll i = 0; i < N; i++) cin >> A[i];
//   for (ll i = 0; i < N; i++) cin >> B[i];
//   for (ll i = 0; i < N; i++) cin >> C[i];
//   for (ll i = 0; i < N; i++) cin >> D[i];

//   ll sum = 0, index = 0;
//   backtrack(sum, N, K, index, A, B, C, D);
//   std::cout << "No" << std::endl;
//   return (EXIT_SUCCESS);
// }
