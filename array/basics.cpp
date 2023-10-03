
  #include<iostream>

using namespace std;
int main(){

int a =5;
cout <<"address of a :"<< &a <<endl;




// & is used to see its address;

//these are static arrays

int arr[10];
cout <<"address of a :"<< &arr <<endl;

cout <<"address of a :"<< arr <<endl;
//in both condition it will give out address of arr


cout <<"size of arr :"<<  sizeof(arr) << endl;


//initilizing arr;
int arr[]={1,2,3,4,5,4,5,6,7}

int arr[5]={1,2,3,5,7}

int arr[5]={5,6}
//in this case rest 3 places will have zero;

int arr[2]={3,4,5,6,6}
//in this case it will give error



                         //Indexing in array;

int narr[5]={23,3,5,6,7};

cout<<narr[0]<<endl;


                        //Taking input in an array;

   int arr[5];
   int n=5;
   for(int i=0;i<n;i++){
    cout<< "Enter the value of index "<< i<<" ";
    cin>>arr[i];
    cout<<endl;
   }  

   for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
   }

}