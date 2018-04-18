// provides shift of an array to left

#include <iostream>
using namespace std;

void reverse (int * a, int size) {
  if (size <= 1)
    return;

  int i = 0;
  int j = size - 1;

  while (i < j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    ++i;
    --j;
  }

  for (int i = 0; i < size; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void rotate (int a[], unsigned size, int shift) {
  if (shift == 0) {
    return;
  } else if (shift > size) {
    int reminder = shift % size;
    reverse(a, reminder);
    reverse(a + reminder, size - reminder);
    reverse(a, size);
  } else {
    reverse(a, shift);
    reverse(a + shift, size - shift);
    reverse(a, size);
  }
}

int main () {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int arr_size = 6;
  int arr_shift = 4;

  rotate(arr, arr_size, arr_shift);

  return 0;
}

