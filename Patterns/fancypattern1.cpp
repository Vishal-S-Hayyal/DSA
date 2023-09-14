#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=0; i<(n/2)+1; i++){
    //1st part
    for(int j=0; j<n-i-1; j++){
        cout<<"*";
    }
    //2nd part
    for(int j=0; j<2*i+1; j++){
        if(j%2==0){
            cout<<i+1;
        }
        else{
            cout<<"*";
        }
    }
    //3rd part(same as firsst part)
    for(int j=0; j<n-i-1; j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}