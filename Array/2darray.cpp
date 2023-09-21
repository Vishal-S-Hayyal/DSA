#include <bits/stdc++.h>
using namespace std;

int main() {
int brr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
//outer loop for rowwise
for(int i=0; i<3; i++){
//for every row, we need to print value in each coloumn
for(int j=0; j<3; j++){
    cout<<brr[j][i]<<" ";
    //for row wise
    //cout<<brr[i][j];
}
cout<<endl;
}
}