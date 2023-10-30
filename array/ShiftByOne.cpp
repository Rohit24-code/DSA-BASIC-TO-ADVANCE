#include <iostream>
using namespace std;
int main() {
  int arr[] = {10, 20, 30, 40, 50, 60};

  //NOTES : - I was trying to solve it using pointer from start which was a great blunder as every last item will be 10 ;

  int length = 6;
  int lastValue = arr[length - 1];
  for (int i = length - 1; i >= 0; i--) {
    arr[i] = arr[i - 1];
    if (i == 0) {
      arr[0] = lastValue;
    }
  }

  for (int j = 0; j < length; j++) {
    cout << arr[j] << " ";
  }
}