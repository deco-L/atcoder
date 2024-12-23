#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;
// const int K = 200010;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, m;
//     cin >> n >> m;
//     vector<int> id(K, -1);
//     int r = K;
//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         while (r > a) {
//             --r;
//             id[r] = i + 1;
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         int b;
//         cin >> b;
//         cout << id[b] << '\n';
//     }
// }
