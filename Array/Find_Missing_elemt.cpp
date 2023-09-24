#include <bits/stdc++.h>
using namespace std;

void findelement(int arr[], int n){
    // for(int i=0; i<n; i++){
    //     int index=abs(arr[i]);
    //     if(arr[index-1]>0){
    //         arr[index-1]*=-1;
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     if(arr[i]>0){
    //         cout<<i+1<<endl;
    //     }
    // }
    sort(arr, arr + n);
    while(arr[0]==arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=i && i!=0){
        cout<<i+1<<" ";}
    }

}

int main() {
int arr[]={1,2,2,3,2};
int n=sizeof(arr)/sizeof(int);
findelement(arr,n);

}