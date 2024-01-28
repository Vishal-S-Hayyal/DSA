#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int decimaltobinarymethod1(int n){
  //method1
  int binary=0;
  int i=0;
    while(n>0){
        int bit = n%2;
        binary = bit*pow(10,i++)+binary;
        n=n/2;
        }
        return binary;
}
int main() {
  int n;
  cin>>n;
  int result=decimaltobinarymethod1(n);
  cout<<result<<endl;
}