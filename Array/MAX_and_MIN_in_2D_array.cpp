#include <bits/stdc++.h>
using namespace std;

int findmax(int a[][3], int row, int col){
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]>maxi){
                maxi=a[i][j];
            }
        }
    }
    return maxi;
}

int findmin(int a[][3], int row, int col){
    int mini = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]<mini){
                mini=a[i][j];
            }
        }
    }
    return mini;
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
int max=findmax(a,row,col);
cout<<"The maximum number is : "<<max<<endl;
cout<<"The minimum number is : "<<findmin(a,row,col)<<endl;

}