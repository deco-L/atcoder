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

  int N = 0, K = 0;
  string S;

  cin >> N >> K >> S;

  vector<int> counts(N / 2 + 1, 0);
  int count = 0;

  for (int i = 0; i < N; i++) {
    if (i == 0 && S[i] == '1')
      count++;
    if (i != 0 && S[i - 1] == '0' && S[i] == '1')
      count++;
    if (count && S[i] == '1')
      counts[count]++;
  }

  string result(N, 0);

  count = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0 && S[i] == '1')
      count++;
    if (i != 0 && S[i - 1] == '0' && S[i] == '1')
      count++;
    if (count == K - 1 && S[i] == '0' && counts[K]-- > 0)
      result[i] = '1';
    else if (count == K && S[i] == '1' && counts[K]-- > 0)
      result[i] = '1';
    else if (count == K && S[i] == '1')
      result[i] = '0';
    else
      result[i] = S[i];
  }
  cout << result << endl;
  return (EXIT_SUCCESS);
}


// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     int N, K;
//     cin >> N >> K;
//     string S;
//     cin >> S;

//     // 分割
//     vector<int> idx = {0};
//     for (int i = 1; i < N; ++i) {
//         if (S[i - 1] != S[i]) {
//             idx.push_back(i);
//         }
//     }
//     idx.push_back(N);

//     vector<string> splited_S;
//     for (size_t i = 0; i < idx.size() - 1; ++i) {
//         splited_S.push_back(S.substr(idx[i], idx[i + 1] - idx[i]));
//     }

//     // スワップ
//     int kth_1_idx;
//     if (S[0] == '0') {
//         kth_1_idx = 2 * K - 1;
//     } else {
//         kth_1_idx = 2 * K - 2;
//     }

//     // スワップが可能かチェック
//     if (kth_1_idx - 1 < splited_S.size() && kth_1_idx < splited_S.size()) {
//         swap(splited_S[kth_1_idx - 1], splited_S[kth_1_idx]);
//     }

//     // 結合
//     string T;
//     for (const auto& segment : splited_S) {
//         T += segment;
//     }

//     // 出力
//     cout << T << endl;

//     return 0;
// }
