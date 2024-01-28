#include <iostream>
using namespace std;

int main() {
int arr[]={0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
int size = 15;
int numzero = 0;
int numone = 0;
for(int i=0; i<size; i++){
    if(arr[i]==0){
        numzero++;
    }
    else{
        numone++;
    }
}
cout<<"Number of zeros "<<numzero<<" Number of ones "<<numone<<endl;
}