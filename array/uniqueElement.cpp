#include <iostream>
using namespace std;

int getUnique(int arr[], int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    // this is using zor so zor removed duplicate from array we are comparing every element with a stored value.
    ans = ans ^ arr[i];
    cout << ans << endl;
  }
  return ans;
}

int main() {
  int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
  int n = 9;
  int finalAns = getUnique(arr, n);
  // cout << finalAns << endl;
}