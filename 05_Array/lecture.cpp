#include <iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

void inc(int arr[], int size){
    arr[0]=arr[0]+10;
    printArray(arr, size);
}
int main() {
// // int arr[5]={1,2,3,4,5};
// // int brr[10]={1,2,3,4,5,6,7,8,9,0};
// // cout<<"Array created";
// int arr[]={1,3,5,7,9};

// for(int i=0; i<5; i++){
// cout<<arr[i]<<endl;}
// int arr[10];
// cout<<"Enter the elements of array"<<endl;
// for(int i=0; i<10; i++){
//     cin>>arr[i];
// }
// cout<<"printing thte value of array"<<endl;
// for(int i=0; i<10; i++){
//     arr[i]=1;  
//     cout<<arr[i]<<endl;
// }

 int arr[]={5,6};
 int size = 2;
 inc(arr,size);
 printArray(arr,size);





} 