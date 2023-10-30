#include <iostream>
using namespace std;

void fnswap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main() {
  int arr[] = {0, 1, 0, 1, 1, 1};
  int length = 6;
  int i = 0;
  int j = length - 1;
  while (i < j) {
    if (arr[i] == 0) {
      i++;
    }

    if (arr[j] == 1) {
      j--;
    } else if (arr[j] == 0) {
      fnswap(arr, i, j);
      cout << "called" << endl;
      i++;
      j--;
    }
  }
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
}