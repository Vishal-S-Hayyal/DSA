#include <bits/stdc++.h>
using namespace std;
int minindex(vector<int>a , int n){
        int min=*min_element(a.begin(),a.end());
    for(int i=0; i<a.size(); i++){
        if(a[i]==min){
            return i;
        }
    }
}
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<a.size(); i++){
        cin>>a[i];
    }
    int new_min=minindex(a,n);
    a[new_min] +=1;
    int temp=1;
        for(int i=0; i<a.size(); i++){
        temp=temp*a[i];}
    cout<<temp<<endl;
    }
    
}