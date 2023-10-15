#include <iostream>
using namespace std;
bool isprime(int x){
    
    for(int i=2; i<=x/2; i++){
        if(x%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main() {
int n;
cout<<"Enter the value of n "<<endl;
cin>>n;
bool res=isprime(n);
if(res){
    cout<<n<<" is a prime number"<<endl;
}
else{
    cout<<n<<" is not a prime number"<<endl;
}
return 0;
}