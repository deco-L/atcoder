#include <stdint.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef int_fast64_t ll;

int32_t main(void) {
  std::string nbr;
  cin >> nbr;

  cout << nbr[1] << nbr[2] << nbr[0] << " " << nbr[2] << nbr[0] << nbr[1] << endl;
  return (EXIT_SUCCESS);
}
