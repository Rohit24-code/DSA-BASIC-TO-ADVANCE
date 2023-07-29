#include<iostream>

using namespace std;

int main(){
 
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << i + 1;
      if (i > 0 && j < i) {
        cout << "*";
      }
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << n - i;
      if (i != n - 1 && j < n - i - 1) {
        cout << "*";
      }
    }
    cout << endl;
  }
}