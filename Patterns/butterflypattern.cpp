#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
//1st part
for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
        cout<<"*";
    }
    for(int j=0; j<(n-i)*2; j++){
        cout<<" ";
    }    
    for(int k=0; k<i+1; k++){
        cout<<"*";
    }
//2nd part
for(int i=n-1; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    for(int k=1; k<=(n-i)*2; k++){
        cout<<" ";
    }
    for(int l=1;l<=i;l++){
        cout<<"*";
    }
}    
    cout<<endl;
}
}