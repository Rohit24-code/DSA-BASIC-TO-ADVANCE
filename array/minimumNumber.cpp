#include <iostream>
#include <limits.h>
using namespace std;

int smallestDigit(int arr[], int size) {
  int minAns = INT_MAX;

  for (int i = 0; i < size; i++) {
    if (arr[i] < minAns) {
      minAns = arr[i];
    }
  }
  return minAns;
}

int main() {
  int arr[5] = {2, 7, 8, 3, 5};
  int size = 5;
  int ans = smallestDigit(arr, size);
  cout << ans << endl;
}