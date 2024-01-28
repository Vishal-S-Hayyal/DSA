#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int row=0;row<n;row+=1){
    if(row==0 || row ==n-1){
        for(int i=0;i<n;i++){
        cout<<"* ";}
    }
    else{
        cout<<"* ";
        for(int i=0;i<n-2;i++){
            cout<<"  ";
        }
        cout<<"* ";
    }
    cout<<endl;
}
}