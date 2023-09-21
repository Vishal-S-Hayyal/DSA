#include <bits/stdc++.h>
using namespace std;

int main() {
int arr[4][3];
int row=4;
int col=3;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}
cout<<"Printing array row wise"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}