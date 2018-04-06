#include <iostream>
#include "logarithm.hpp"
using namespace std;

int main()
{
  int test_amount = 0;
  int test_num = 0;

  cin >> test_amount;

  for (int i = 0; i < test_amount; ++i) {
    cin >> test_num;
    if ((test_num >= 1) && (test_num < 1000000000)) {
      log2(test_num);
    }
  } 

  return 0;
}

