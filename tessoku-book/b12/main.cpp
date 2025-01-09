#include <cstdint>
#include <cfloat>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef int_fast64_t ll;
typedef int_fast32_t fint;

// static fint check(double mid, double N) {
//   fint flag = 0b11;
//   double num = 0;

//   num = pow(mid, 3) + mid;

//   if ((num *= pow(10, 3)) == (N *= pow(10, 3))) return (0b01);
//   else if (num < N) return (0b00);
//   else return (0b10);
// }

// static double binarySearch(double N) {
//   double L = 0, R = 100, mid = 0;

//   while (L < R) {
//     mid = (L + R) / 2;
//     if (check(mid, N) == 0b01)
//       return (mid);
//     else if (check(mid, N) == 0b00)
//       L = mid;
//     else
//       R = mid;
//   }
//   return (-1);
// }

// int32_t main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   double N = 0, ans = 0;

//   cin >> N;
//   ans = binarySearch(N);
//   cout << fixed << setprecision(6) << ans << endl;
//   return (EXIT_SUCCESS);
// }

static fint check(double mid, double N, double epsilon = 1e-3) {
  double num = pow(mid, 3) + mid;

  if (abs(num - N) <= epsilon) return (0b01);
  else if (num < N) return (0b00);
  else return (0b10);
}

static double binarySearch(double N, double epsilon = 1e-3) {
  double L = 0, R = 100;

  while (R - L > epsilon) {
    double mid = (L + R) / 2;
    fint res = check(mid, N, epsilon);
    if (res == 0b01)
      return mid;
    else if (res == 0b00)
      L = mid;
    else
      R = mid;
  }
  return (L + R) / 2;
}

int32_t main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double N = 0, ans = 0;

  cin >> N;
  ans = binarySearch(N);
  cout << fixed << setprecision(6) << ans << endl;
  return (EXIT_SUCCESS);
}
