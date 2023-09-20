#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> arr{10,20,40,60,70};
for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
        cout<<"Printing all the pairs"<<endl;
        cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    }
}
}