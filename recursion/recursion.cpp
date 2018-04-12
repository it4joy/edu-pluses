#include <iostream>
using namespace std;

int inversion(int n) {
  cin >> n;

  if (n != 0) {
    inversion(n);
    cout << n << " ";
  }
}

int main()
{
  int num = 1;

  cout << "To exit press Ctrl+C; print '0' as end of sequence" << "\n";

  while (true) {
    inversion(num);
    cout << "\n";
  }

  cout << "\n";

  return 0;
}

