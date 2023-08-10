  #include<iostream>

using namespace std;

int main(){
 
  int n;
  cin >> n;
  int count = 1;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < row + 1; col++) {
      cout << count++;
      if (col < row) {
        cout << "*";
      }
    }
    cout << endl;
  }

  count = count - n;
  for (int row = 0; row < n; row++) {
    int k = count;
    for (int col = 0; col < n - row; col++) {
      cout << k++;
      if (col < n - row - 1) {
        cout << "*";
      }
    }
    count = count - (n - row - 1);
    cout << endl;
  }
}
