#include <iostream>
using namespace std;

/*
calc int logarithm on base 2;
returns biggest exp less/equal to 'test_num';
*/

int res, mid_val, remainder;

int log2(int test) {
  mid_val = test;
  res = 0;
  while(mid_val > 1) {
    if ((mid_val % 2) > 0) {
      remainder = mid_val % 2;
      mid_val = mid_val - remainder;
      mid_val = mid_val / 2;
      ++res;
    } else {
      mid_val = mid_val / 2;
      ++res;
    }
  }
  cout << res << endl;
}

int main() {
  int test_amount, test_num;

  cin >> test_amount;

  for (int i = 0; i < test_amount; ++i) {
    cin >> test_num;
    if ((test_num >= 1) && (test_num < 1000000000)) {
      log2(test_num);
    }
  }

  return 0;
}

