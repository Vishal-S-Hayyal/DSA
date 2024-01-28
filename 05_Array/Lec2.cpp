#include <bits/stdc++.h>
using namespace std;

int main() {
// vector<int>arr;
// int ans=(sizeof(arr)/sizeof(int));
// cout<<ans<<endl;
// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;

// arr.push_back(5);
// arr.push_back(6);

// for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<endl;
// }

// arr.pop_back();
// for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<endl;
// } 

// vector<int> brr(10);
// cout<<"Size of brr "<<brr.size()<<endl;
// cout<<"Capacity of brr "<<brr.capacity()<<endl;

// for(int i=0; i<brr.size(); i++){
//     cout<<brr[i]<<endl;
// }

vector<int> a{10,20,30,40};
for(int i; i<a.size(); i++){
    cout<<a[i]<<" ";
}
cout<<endl;
a.pop_back();
for(int i; i<a.size(); i++){
    cout<<a[i]<<" ";
}
}  