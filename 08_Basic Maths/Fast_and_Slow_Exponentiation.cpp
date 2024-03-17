#include<bits/stdc++.h>
using namespace std;

int fastExp(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1)/* to check whether b is odd */{
            ans = ans * a;
        }
        a*=a;
        b>>=1; // b=b/2 
    }
    return ans;
}// Time Complexity O(log(n))

int slowExp(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans*=a;
    }
    return ans;
}// Time Complexity O(b)


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
cout<<slowExp(4,5)<<endl;
cout<<fastExp(4,5)<<endl;
 
return 0;
}