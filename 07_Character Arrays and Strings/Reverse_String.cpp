#include<bits/stdc++.h>
using namespace std;

void reverseString(char ch[], int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int findlength( char ch[], int size){
    int length = 0;
    for(int i=0; i<size; i++){
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

cout<<"Enter the string to reverse :"<<endl;
cin.getline(ch,100);

int len = findlength(ch,100);

cout<<"String before reverse :"<<ch<<endl;

reverseString(ch,len);

cout<<"string after reverse :"<<ch<<endl;

//STL function to reverse a string 
// reverse(str.begin(),str.end());
 
return 0;
}