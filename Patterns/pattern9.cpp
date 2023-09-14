#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   for(int i=0; i<n; i++){
       //spaces
      for(int j=0; j<n-i-1; j++){
          cout<<" ";
      }
      //starting triangle
      for(int j=0; j<i+1; j++){
          cout<<j+1;
      }
      //3rd part
      int start=i;
      for(int j=0; j<i; j++){
          cout<<start;
          start--;
      }
      cout<<endl;
   }
    return 0;
}