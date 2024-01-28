#include <iostream>
using namespace std;

int sum(int x){
    int s=0;
    for(int i=2; i<=x; i+=2){
            s=s+i;
    }
  return s;
}
int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int res=sum(n);
cout<<"Sum of all even number till n is:"<<res<<endl;
}