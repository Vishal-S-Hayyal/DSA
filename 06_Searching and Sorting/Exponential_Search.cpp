#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> PI;
typedef pair<ll, ll> PL;
typedef set<int,int> si;
typedef map<int,int> mi;
 
int BS(int a[], int start, int end, int x){
    while(start < end){
    int mid = start + (end - start)/2;
        if(a[mid] == x){
            return mid;
        }
        else if (a[mid]<x){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }


}

int expSearch(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }
    int i = 1;
    while(i<n && a[i]<=x){
        i = i*2;
    }
        return BS(a,i/2,min(i,n-1),x);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a) / sizeof(int);
    int x = 56;
    int ans = expSearch(a,n,x);
    cout<<"The ans is : "<<ans<<endl;
    
 
return 0;
}