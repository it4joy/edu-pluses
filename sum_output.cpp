#include <iostream>
using namespace std;

// only integers;

int main() {
  int pair_amount = 0;
  int a = 0;
  int b = 0;

  cout << "Please, enter the amount of pairs of numbers to print sum of them..." << "\n";
  cin >> pair_amount;
  cout << "Your amount is: " << pair_amount << ". Please, enter pairs of numbers..." << "\n";

  for (int i = 0; i < pair_amount; ++i) {
    cin >> a >> b;
    cout << "*** " << a << " + " << b << " = " << a + b << "\n";
  }
  cout << "Bye! See u later." << "\n";

  return 0;
}

