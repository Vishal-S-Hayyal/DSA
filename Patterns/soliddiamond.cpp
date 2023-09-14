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
for(int j=0; j<i+1; j++){
    //for odd number of stars run loop till 2*i+1
    cout<<"* ";}
    cout<<endl;
}
for(int i=0;i<n;i++){
    //spaces
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    //stars
    for(int j=0; j<n-i; j++){
        cout<<"* ";
    }
    cout<<endl;
}

}