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

void print(vi &v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(vi &v){
    int n = v.size();
    for(int i = 0; i<n-1; i++){
        int minIndex = i; // assume ith hi smallest hai
        for(int j = i+1; j<n; j++){
            if(v[j]<v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vi v = {44,33,55,22,11};
    selection_sort(v);
    print(v);
 
return 0;
}