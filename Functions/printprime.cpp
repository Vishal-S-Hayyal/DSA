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
for(int i=1; i<=n; i++){ 
    bool result=isprime(i);
    if(result){
        cout<<i<<endl;
    }
}
return 0;
}