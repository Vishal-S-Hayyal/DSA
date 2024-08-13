#include<bits/stdc++.h>
using namespace std;

void subsequence(string str, string output, int index){
    //Base case
    if(index >= str.length()){
        //Print sequence
        cout<<"->"<<output<<endl;
        return ;
    }
    char ch = str[index];
    //Exclude ch
    subsequence(str, output, index+1);
    //Include ch
    output.push_back(ch);
    subsequence(str, output, index+1);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
string str = "abc";
string output = "";
int index = 0;

subsequence(str, output, index);
 
return 0;
}