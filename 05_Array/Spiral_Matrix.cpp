#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int startingrow=0;
        int endingcol=n-1;
        int endingrow=m-1;
        int startingcol=0;
        int total_count=m*n;
        int count=0;
        while(count<total_count){
        //starting row
        for(int i=startingcol; i<=endingcol && count<total_count; i++){
            ans.push_back(matrix[startingrow][i]);
            count++;
        }
        startingrow++;

        //ending col
        for(int i=startingrow; i<=endingrow && count<total_count; i++){
            ans.push_back(matrix[i][endingcol]);
            count++;
        }
        endingcol--;

        //ending row
        for(int i=endingcol; i>=startingcol && count<total_count; i--){
            ans.push_back(matrix[endingrow][i]);
            count++;
        }
        endingrow--;

        //starting col
        for(int i=endingrow; i>=startingrow && count<total_count; i--){
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;
        }
        return ans;
    }

int main() {
vector<vector<int>> v{
    {1,2,3,4,5,6},
    {7,8,9,10,11,12},
    {13,14,15,16,17,18},
    {19,20,21,22,23,24},
    {25,26,27,28,29,30}
};
vector<int> result=spiralOrder(v);
for(int i=0; i<result.size(); i++){
cout<<result[i]<<" ";
}
return 0;

}