#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    // cout<<"Size of array in function: "<<sizeof(arr)<<endl;
    cout<<"Inside solve arr: "<<arr<<endl;
    cout<<"Inside solve &arr: "<<&arr<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
// int arr[5] = {1,2,3,4,5};
// int *ptr = arr;

// int (*ptr1)[5] = &arr;

// cout<<ptr<<endl;
// cout<<ptr1<<endl;

int arr[4] = {1,2,3,4};
// cout<<"Size of array is: "<<sizeof(arr)<<endl;
solve(arr,4);

cout<<"Inside main arr: "<< arr <<endl;
cout<<"Inside main &arr: "<<&arr<<endl;

return 0;
}