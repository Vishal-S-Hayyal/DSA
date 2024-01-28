#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter a number"<<endl;
cin>>n;
int count=1;
for(int i=0; i<n; i++){
    for(int j=0; j<2*i+1; j++){
        if(j%2==0){
            cout<<count;
            count++;
        }
        else{
            cout<<"*";}
    }
    cout<<endl;
}
// cout<<count;
//shrinking phase
int start =count-n;
for(int i=0; i<n; i++){
    int k=start;
    for(int j=0;j<=n-i; j++){
        if(j%2==0){
        cout<<k;
        k++;}
        else{
            cout<<"*";
        }
    }
    start = start - (n-i-1);
    cout<<endl;
}
    return 0;
}