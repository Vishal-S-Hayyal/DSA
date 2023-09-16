#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
            break;
        }  
    }
    return false;
}
int main() {
int arr[5]= {1,3,5,7,8};
int size=5;
int key;
cout<<"Enter the key to find"<<endl;
cin>>key;
if(linearsearch(arr,size,key)){
    cout<<"Found";
}
else{
    cout<<"Not found";
}
}