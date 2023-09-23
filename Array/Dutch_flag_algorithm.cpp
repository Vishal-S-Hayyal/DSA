#include <bits/stdc++.h>
using namespace std;

void moveallnegative(int a[], int n){
    int l=0;
    int h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
    }
}

int main() {
int a[5]={1,2,-1,-3,5};
int n=sizeof(a)/sizeof(int);
moveallnegative(a,n);
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}