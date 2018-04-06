#include <iostream>
using namespace std;

/*
calc int logarithm on base 2;
returns biggest exp less/equal to 'test_num';
*/

int res = 0;
int mid_val = 0;
int remainder = 0;

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

