#include<iostream>

using namespace std;

int main() {

    // my method

    int rowcount;
    cin>>rowcount;

//  for (int row = 0; row < rowcount; row++) {
//     for (int j = 0; j < rowcount - (row + 1); j++) {
//       cout << " ";
//     }

//     for (int k = 0; k < (row + 1); k++) {
//       if (row != rowcount - 1) {
//         if (k == 0 || k == (row + 1) - 2)) {
//           cout << "*";
//         } else {
//           cout << " ";
//         }
//       } else {
//         cout << "*";
//       }
//     }

//     cout << endl;
//   }





                                        //   love babbar
for (int row = 0; row < rowcount; row++) {
    int k = 0;
    for (int col = 0; col < (rowcount * 2) - 1; col++) {

      if (col < (rowcount - (row + 1))) {
        cout << " ";
      }

      else if (k < (row * 2 + 1)) {
        if (k == 0 || k == row * 2 || row == rowcount - 1) {
          cout << "*";
        } else {
          cout << " ";
        }

        k++;
      }

      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}