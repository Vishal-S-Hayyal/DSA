#include <bits/stdc++.h>
using namespace std;

void transpose(int a[][3], int row, int col, int transposearr[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            //swap(a[i][j],a[j][i]);
            transposearr[j][i]=a[i][j];
        } 
    }
}

void printarray(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
int a[3][3];
int row=3;
int col=3;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>a[i][j];
    }
}
cout<<"Printing Array "<<endl;
printarray(a,row,col);
int transposearr[3][3];
transpose(a,row,col,transposearr);
cout<<"Printing traspose"<<endl;
printarray(transposearr,row,col);
return 0;
}