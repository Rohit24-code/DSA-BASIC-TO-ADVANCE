// Linear search
  #include<iostream>

using namespace std;
int main(){
  int searchAmong[5] = {2, 4, 6, 8, 10};
  int target = 15;
  int n = 5;

  bool flag = 0;

  for (int i = 0; i < n; i++) {
    if (searchAmong[i] == target) {
      flag = 1;
      break;
    }
  }

  if (flag == 1) {
    cout << "target found" << endl;
  } else {
    cout << "target not found" << endl;
  }
}