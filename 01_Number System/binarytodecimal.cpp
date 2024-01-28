#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n){
    int decimal=0;
    int i=0;
    while(n){int bit=(n&1);
    decimal=decimal+bit*pow(2,i++);
    n=n/10;}
    return decimal;
}
int main() {
int n; 
cout<<"Enter the binary value"<<endl;
cin>>n;
int result=binarytodecimal(n);
cout<<result<<endl;
}