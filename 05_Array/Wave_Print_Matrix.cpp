#include <bits/stdc++.h>
using namespace std;

void printwave(vector<vector<int>> v){
    int row=v.size();
    int col=v[0].size();
    for(int j=0; j<col; j++){
        //for even col
        if((j & 1)==0){
            for(int i=0; i<row; i++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1; i>=0; i--){
                cout<<v[i][j]<<" ";
            }
        }
    }
}

int main() {
vector<vector<int>> v {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
printwave(v);
}