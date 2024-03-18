#include<bits/stdc++.h>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int a=10;

cout<<a<<endl;
cout<<"address of a:"<<&a<<endl;

//Pointer Creation
int *ptr = &a;

cout<<ptr<<endl;
cout<<"Accessing :"<<*ptr<<endl;
cout<<&ptr<<endl;
cout<<"Size of int ptr: "<<sizeof(ptr)<<endl;

char b='a';
char *cptr=&b;
cout<<"Size of char ptr: "<<sizeof(cptr)<<endl;

char ch='a';
char *cpr = &ch;

cout<< cpr <<endl;

char s[10] = "vishal";
char *cp = s;
cout<<&cp<<endl;


 
return 0;
}