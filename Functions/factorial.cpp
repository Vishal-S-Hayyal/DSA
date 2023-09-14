#include <iostream>
using namespace std;

long long int Factorial(long long int x){
    long long int result=1;
    for(int i=1; i<=x; i++){
        result=result*i;
    }
    return result;
}
int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
long long int res=Factorial(n);
cout<<"Factorial of "<<n<<" is "<<res<<endl;
}