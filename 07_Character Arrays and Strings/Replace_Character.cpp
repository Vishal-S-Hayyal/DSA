#include<bits/stdc++.h>
using namespace std;

void replace(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
char ch[100];

cin.getline(ch,100);

cout<<"Before: "<<ch<<endl;

replace(ch);

cout<<"After: "<<ch<<endl;
 
return 0;
}