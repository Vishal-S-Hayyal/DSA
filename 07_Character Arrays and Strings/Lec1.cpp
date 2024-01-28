#include<bits/stdc++.h>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//creation 
char ch[100];

//input
// cin>>ch;

//input method to avoid delimitor 

cin.getline(ch,100);

//no need of wrinting for loop to input or print 
//printing character array

cout<<"Printing the values of ch : "<<ch<<endl;

//printing using loop

// for(int i = 0; i<10; i++){
//     cout<<"At index "<<i<<" "<<ch[i]<<endl;
// }

// char temp = ch[6];
// int value = int(temp);
// cout<<"Printing integer value "<<value<<endl;



return 0;
}