#include <iostream>
using namespace std;

void swap(int arr[], int left, int right) {
  int temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
}

void reverseArray(int arr[], int size) {
  // basic method
  // int newArray[5] = {};
  // for (int i = 0; i < size; i++) {
  //   newArray[size - (i + 1)] = arr[i];
  // }

  // for (int j = 0; j < size; j++) {
  //   cout << newArray[j] << endl;
  // }

  // Two pointers
  int p1 = 0;
  int p2 = size - 1;

  while (p1 <= p2) {
    swap(arr, p1, p2);
    p1++;
    p2--;
  }
  for (int j = 0; j < size; j++) {
    cout << arr[j] << endl;
  }
}

void extremePrint(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    if (left == right) {
      cout << arr[left] << endl;
    } else {
      cout << arr[left] << endl;
      cout << arr[right] << endl;
    }

    left++;
    right--;
  }
}

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  int size = 5;
  // reverseArray(arr, size);
  extremePrint(arr, size);
}