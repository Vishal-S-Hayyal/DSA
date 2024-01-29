#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char ch[], int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(ch[i]!=ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}

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

bool ispalindrome = checkPalindrome(ch,len);

if(ispalindrome){
    cout<<"Valid Palindrome"<<endl;
}

else{
    cout<<"Invalid Palindrome"<<endl;
}



// cout<<"Length of string is "<<len<<endl;
// cout<<"Length is "<<strlen(ch)<<endl;
 
return 0;
}