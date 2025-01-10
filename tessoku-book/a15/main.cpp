#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

// int32_t main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   ll N = 0;

//   cin >> N;

//   vector<pair<fint, ll>> A(N, pair(0, 0));
//   vector<ll> B(N, 0);

//   for (ll i = 0; i < N; i++) {
//     A[i].first = i;
//     cin >> A[i].second;
//   }
//   sort(
//     A.begin(),
//     A.end(),
//     [](const pair<fint, ll>& a, const pair<fint, ll>& b) {
//       return (a.second < b.second);
//     }
//   );

//   ll index = 1;
//   for (ll i = 0; i < N; i++) {
//     if (i > 0 && A[i].second == A[i - 1].second) {
//       B[A[i].first] = B[A[i - 1].first];
//     } else {
//       B[A[i].first] = index++;
//     }
//   }
//   for (ll i = 0; i < N; i++) {
//     if (i != 0)
//       cout << ' ';
//       cout << B[i];
//   }
//   cout << endl;
//   return (EXIT_SUCCESS);
// }


int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N = 0;

  cin >> N;

  vector<pair<fint, ll>> A(N, pair(0, 0));
  vector<ll> tmp(N, 0), B(N, 0);

  for (ll i = 0; i < N; i++) {
    A[i].first = i;
    cin >> A[i].second;
  }
  sort(
    A.begin(),
    A.end(),
    [](const pair<fint, ll>& a, const pair<fint, ll>& b) {
      return (a.second < b.second);
    }
  );

  ll index = 1;

  for (ll i = 0; i < N; i++) {
    if (i == 0) tmp[i] = index;
    else if (A[i - 1].second < A[i].second) tmp[i] = ++index;
    else tmp[i] = index;
  }
  for (ll i = 0; i < N; i++) B[A[i].first] = tmp[i];
  for (ll i = 0; i < N; i++) {
    if (i != 0)
      cout << ' ';
    cout << B[i];
  }
  cout << endl;
  return (EXIT_SUCCESS);
}


// binary search
// int main() {
// 	// 入力
// 	int N, A[100009], B[100009];
// 	cin >> N;
// 	for (int i = 1; i <= N; i++) cin >> A[i];

// 	// 配列 T の作成
// 	vector<int> T;
// 	for (int i = 1; i <= N; i++) T.push_back(A[i]);
// 	sort(T.begin(), T.end());

// 	// 配列 T の重複を消す
// 	// erase 関数・unique 関数は本書の範囲外ですが、ぜひ調べておきましょう
// 	T.erase(unique(T.begin(), T.end()), T.end());

// 	// 答えを求める
// 	for (int i = 1; i <= N; i++) {
// 		// vector 型の lower_bound は以下のような形式で書く
// 		// vector 型の添字は 0 番目から始まるので、1 を足す必要があることに注意
// 		B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
// 		B[i] += 1;
// 	}

// 	// 答えを空白区切りで出力
// 	for (int i = 1; i <= N; i++) {
// 		if (i >= 2) cout << " ";
// 		cout << B[i];
// 	}
// 	cout << endl;
// 	return 0;
// }