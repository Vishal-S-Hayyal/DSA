#include<bits/stdc++.h>
using namespace std;

int bns(vector<int> &v, int k, int start, int end){

while(start<end){
    int mid = start+(end-start)/2;

    if(v[mid] == k){
        return mid;
    }
    else if(k > v[mid]){
        return bns(v,k,mid+1, end);
    }
    else{
        return bns(v,k,start, mid-1);
    }
}
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> v{2,3,10,20,50};
int start = 0;
int end = v.size(); 

int ans = bns(v, 10, start, end);

cout<<ans<<endl;
 
return 0;
}