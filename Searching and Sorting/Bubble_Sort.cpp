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
 
void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(vector<int> &v){
    int n = v.size();
    for(int i =  0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<int> v = {5,4,3,2,1};
    bubblesort(v);
    print(v);
 
return 0;
}