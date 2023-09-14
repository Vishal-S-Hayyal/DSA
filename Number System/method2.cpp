#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int decimaltobinarymethod2(int n){
    int binary=0;
    int i=0;
    while(n>0){
        int bit = (n & 1);
        binary = bit*pow(10,i++)+binary;
        n=n>>1; 
    }
    return binary;
}
int main() {
  int n;
  cin>>n;
  int result=decimaltobinarymethod2(n);
  cout<<result<<endl;
}