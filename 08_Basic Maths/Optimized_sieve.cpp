#include<bits/stdc++.h>
using namespace std;

vector<bool>Sieve (int n){
    vector<bool>sieve(n,true);
    sieve[0]=sieve[1]=false;
    for(int i=2; i*i<n; i++){
        if(sieve[i]==true){
            int j = i*i; // Optimisation 1: first unmarked number would be i*i,as others have been marked by 2 to (i-1)
            while(j<n){
                sieve[j]=false;
                j += i;
            }
        }
    }
    return sieve;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<bool>sieve=Sieve(25);
for(int i=0; i<25; i++){
    if(sieve[i]){
        cout<<i<<" ";
    }
}

 
return 0;
}