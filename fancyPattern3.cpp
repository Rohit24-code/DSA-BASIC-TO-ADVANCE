  #include<iostream>

using namespace std;
int main(){

int n;
  cin >> n;

      for (int i = 0; i < n; i++) {
    int count = 1;
    int conditon = (i > n / 2) ? 2 * (n - i - 1) : i * 2;
    for (int j = 0; j <= conditon; j++) {
      if (j <= conditon / 2) {
        cout << j + 1;
      } else {
        cout << conditon - j + 1;
      }
    }
    cout << endl;
  }
}