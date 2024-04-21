#include<bits/stdc++.h>
using namespace std;

bool Check_Sorted(int arr[], int size, int i){
    //Base Case
    if(i>=size){
        return true;
    }

    if(arr[i] > arr[i-1]){
       return Check_Sorted(arr,size, i+1);
    }
    else{
        return false;
    }
}


void findSubsequences(string str, string output, int index, vector<string> &ans){
    //Base Case 
    if(index>=str.length()){
        // cout<<"->"<<output<<endl;
        ans.push_back(output);
        return ;
    }
    //Processing
    char ch = str[index];

    //exculde
    findSubsequences(str,output,index+1,ans);

    //include
    output.push_back(ch);
    findSubsequences(str,output,index+1,ans);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
// int arr[5] = {10,20,30,40,50};
// int size = 5;
// int i = 1;
// cout<<Check_Sorted(arr,size,i)<<endl;

string str = "abc";
string output = "";
int index = 0;
vector<string> ans;
findSubsequences(str,output,index,ans);
for(string i : ans){
    cout<<"->"<<i<<endl;
}
return 0;
}