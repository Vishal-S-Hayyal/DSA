#include <iostream>
using namespace std;

bool evenorodd(int x){
    if(x&1==0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
bool res= evenorodd(n);
if(res){
cout<<"Entered number is EVEN"<<endl;}
else{
   cout<<"Entered number is ODD"<<endl;
}
}