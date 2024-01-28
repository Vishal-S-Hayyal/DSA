#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int row=0;row<n;row+=1){
    for(int col=0;col<n;col+=1){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}