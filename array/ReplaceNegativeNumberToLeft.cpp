#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int>arr({-23,-7,-12,-10,-11,-40,-60});

  // my method
   int left=0;
   int right=1;
    while(right<arr.size() && left<arr.size()){
      if(arr[left]<0){
        left++;
      }
      if(arr[right]<0 && arr[left]>0){
        swap(arr[left],arr[right]);
          left++;
          right++;
      }else if(arr[right]>=0){
        right++;
      }
    }


  //love babbar method
  // int left=0;
  // for(int Right=0;Right<arr.size();Right++){
  //   if(arr[Right]<0){
  //     swap(arr[Right],arr[left]);
  //     left++;
  //   }
  // }

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}