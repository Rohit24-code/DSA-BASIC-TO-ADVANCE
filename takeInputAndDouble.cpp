
  #include<iostream>

using namespace std;
int main(){

  int arr[10];
  int n = 10;
  for (int i = 0; i < n; i++) {
    cout << "input lelo ";
    cin >> arr[i];
  }

  for (int j = 0; j < n; j++) {
    arr[j] = 2 * arr[j];
  }

  for (int k = 0; k < n; k++) {
    cout << arr[k] << " double" << endl;
  }

}