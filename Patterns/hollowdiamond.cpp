#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=0;i<n;i++){
//spaces
for(int j=0; j<n-i-1; j++){
    cout<<" ";
}
//stars
for(int j=0; j<2*i+1; j++){
    //for odd number of stars run loop till 2*i+1
    if(j==0 || j==2*i){
    cout<<"* ";}
    else{
        cout<<" ";
    }}
    cout<<endl;
}
for(int i=0;i<n;i++){
    //spaces
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    //stars
    for(int j=0; j<2*n-2*i-1; j++){
        if(j==0 || j==2*n-2*i-2){
        cout<<"* ";}
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

}