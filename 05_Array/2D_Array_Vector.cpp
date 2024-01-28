#include <bits/stdc++.h>
using namespace std;

int main() {
// vector<vector<int> > arr;
// vector<int> a{1,2,3};
// vector<int> b{2,4,6};
// vector<int> c{1,3,4};
// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);
int row=5;
int col=5;
vector<vector<int> >a(row, vector<int>(col));

for(int i=0; i<a.size(); i++){
    for(int j=0; j<a[i].size(); j++){
        cin>>a[i][j];
    }
} 
for(int i=0; i<a.size(); i++){
    for(int j=0; j<a[i].size(); j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

}