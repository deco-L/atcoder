#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  ll N, digit = 10;

  cin >> N;

  string array(digit, '0');
  for (ll i = 0; N > 0; i++) {
    if (N % 2)
      array[digit - 1 - i] = '1';
    N /= 2;
  }
  cout << array << endl;
  return (EXIT_SUCCESS);
}

// ----- Explanation -----
// #include <iostream>
// using namespace std;

// int main() {
// 	// 入力
// 	int N;
// 	cin >> N;

// 	// 上の桁から順番に「2 進法に変換した値」を求める
// 	for (int x = 9; x >= 0; x--) {
// 		int wari = (1 << x); // 2 の x 乗
// 		cout << (N / wari) % 2; // 割り算の結果に応じて 0 または 1 を出力
// 	}
// 	cout << endl; // 最後に改行する
// 	return 0;
// }