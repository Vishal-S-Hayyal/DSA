#include <bits/stdc++.h>
using namespace std;


int main() {
vector<int> arr{1,2,3,3,4,6,8};
vector<int> brr{3,3,4,9,10};

vector<int> ans;
for(int i=0; i<arr.size(); i++){
    int element = arr[i];
    for(int j=0; j<brr.size(); j++){
        if(element==brr[j]){
            brr[j]=-1;
            ans.push_back(arr[i]);
        }
    }
}
cout<<"Printing intersection"<<endl;
for(auto value: ans){
    cout<<value<<" ";
}

}