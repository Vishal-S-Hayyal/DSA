#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=0; i<n; i++ ){
    int j;
    for(int j=0; j<i+1; j++){
        int ans = j+1;
        char ch = ans + 'A' - 1;
        cout<<ch;
    }

    j = i;

    for(;j>=1;j=j-1){
        int ans = j;
        char ch = ans + 'A' -1;
        cout<<ch;
    }
    cout<<endl;
}

}