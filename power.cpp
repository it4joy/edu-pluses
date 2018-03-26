#include <iostream>
using namespace std;

int main() {
  int num, exp;
  int degree = 1;

  cout << "Please, enter number and exponent..." << "\n";

  while (true) {
    cin >> num >> exp;
    if (exp == 0) {
      cout << "1" << "\n";
    } else if (exp == 1) {
      cout << num << "\n";
    } else {
      for (int i = 0; i < exp; ++i) {
        degree *= num;
      }
      cout << degree << "\n";
      degree = 1;
    }
  }

  return 0;
}

