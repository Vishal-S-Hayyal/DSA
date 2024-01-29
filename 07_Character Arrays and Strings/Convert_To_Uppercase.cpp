#include<bits/stdc++.h>
using namespace std;
 
void converToUpppercase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        char curCharacter = ch[index];

        if(curCharacter >= 'a' && curCharacter <= 'z'){
            ch[index] = curCharacter - 'a' +'A';
        } 
        index++;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
char ch[100];

cin.getline(ch,100);

cout<<"Before conversion to uppercase :"<<ch<<endl;

converToUpppercase(ch);

cout<<"After conversion to upper case :"<<ch<<endl;
 
return 0;
}