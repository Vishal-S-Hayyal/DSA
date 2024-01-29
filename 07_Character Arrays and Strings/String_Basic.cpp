#include<bits/stdc++.h>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
string name;

// cin>>name;
getline(cin,name);

cout<<"Printing name: "<<name<<endl;

int index = 0;
while(name[index] !='\0'){
  cout<<"Index : "<<index<<"Value: "<<name[index]<<endl;
  index++;
}

return 0;
}