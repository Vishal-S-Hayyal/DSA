#include<bits/stdc++.h>
using namespace std;

int findlength(char ch[], int size){
    int length = 0;
    for(int i = 0; i<size; i++){
        if(ch[i] == '\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
char ch[100];

cin>>ch;

int len = findlength(ch, 100);

cout<<"Length of string is "<<len<<endl;
cout<<"Length is "<<strlen(ch)<<endl;
 
return 0;
}