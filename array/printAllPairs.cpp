#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 20, 30, 50, 100};
  int length = 5;
  int i = 0;
  int j = 0;
  while (i < length) {
    cout << arr[i] << "," << arr[j] << endl;
    j++;
    if (j == length) {
      i++;
      j = 0;
    }
  }
}