#include <iostream>
using namespace std;

int add(int a,int b){
    int result = a+b;
    return result;
}
int main() {
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    int sum=add(a,b);
    cout<<"Addition of both is:"<<sum<<endl;


}