#include <iostream>
using namespace std;
void print(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main() {
int n;
cout<<"Enter the value"<<endl;
cin>>n;
print(n);
}