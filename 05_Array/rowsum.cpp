#include <bits/stdc++.h>
using namespace std;

void rowsum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
           int sum=0;
        for(int j=0; j<col; j++){
            cout<<"Printing rowsum"<<endl;
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main() {
int arr[3][3];
int row=3;
int col=3;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}

//print array
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
rowsum(arr, row,col);

}