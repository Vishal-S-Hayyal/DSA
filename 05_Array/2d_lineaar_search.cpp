#include <bits/stdc++.h>
using namespace std;

bool findkey(int a[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main() {
int a[3][3];
int row=3;
int col=3;
int key=6;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>a[i][j];
    }
}
bool result = findkey(a,row,col,key);
if(result){
    cout<<"yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}