// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                cout<<"*";
            }
            else{
                cout<<count;
            count++;
            }
           
        }
        int start=i;
    for(int j=0; j<i; j++){
        cout<<start;
        start--;
    }
    cout<<endl;
    }

    return 0;
}