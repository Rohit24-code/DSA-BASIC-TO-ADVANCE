#include <iostream>
using namespace std;

void incrementBy(int &k) {
  k++;
  cout << k << endl;
}

int main() {
  // int n = 5;

  //& is used to make alais of a variable and it is refernce to n;
  // THese are refence variable;
  // int &k = n;
  // int &c = n;
  // k++;
  // cout << k << endl;
  // cout << c << endl;
  int n;
  cin >> n;

  incrementBy(n);
  cout << n << endl;
}