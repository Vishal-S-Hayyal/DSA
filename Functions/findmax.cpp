#include <iostream>
using namespace std;

int max(int a,int b, int c){
    if(a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main() {
int x,y,z;
cout<<"Enter three numbers"<<endl;
cin>>x>>y>>z;
int result=max(x,y,z);
cout<<"The maximum out of the three numbers is:"<<result<<endl;
return 0;
}