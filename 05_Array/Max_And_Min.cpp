#include <bits/stdc++.h>
using namespace std;

int main() {
int arr[10] = {12,5,6,2,19,45,34};
int size = 7;
int maxNum= INT_MIN;
int mini= INT_MAX;
for(int i=0; i<size; i++){
    if(arr[i]>maxNum){
        maxNum=arr[i];
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
} 
cout<<"Maximum element inside the array is "<<maxNum<<endl;
cout<<"Minimum element inside the array is "<<mini<<endl;

}