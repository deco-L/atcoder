#include <stdint.h>
#include <cstdlib>
#include <iostream>

using namespace std;
typedef int_fast64_t ll;

int main(void) {
  string S, T;
  ll count = 0;

  cin >> S >> T;

  string X[S.size()], tmp[S.size()];
  if (S == T) {
    cout << 0 << endl;
    return (EXIT_SUCCESS);
  }

  ll index = 0;
  while (S != T) {
    if (S[index] != T[index]) {
      tmp[index] == T[index];
      S[index] == T[index];
    }
    index++;
  }
  return (EXIT_SUCCESS);
}