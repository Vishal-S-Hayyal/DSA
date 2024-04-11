#include<bits/stdc++.h>
using namespace std;

void Print_Counting(int n){
    if(n==1){
        cout<< 1 <<" ";
        return;
    }
    cout<<n<<" ";
    Print_Counting(n-1);
}

int factorial(int n){
    //Base condition
    if(n==1 || n==0) return 1;

    //Recursive relation
    int ans = n * factorial(n-1);

    return ans;

    //Processing
}

int pow(int n){
    if(n == 0) return 1;

    int ans = 2*pow(n-1);
    return ans;
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    int ans = fibonacci(n-1)+fibonacci(n-2);

    return ans;
}

int sum(int n){
    if(n == 1) return 1;

    int ans = n + sum(n-1);
    return ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
// cout<<factorial(5)<<endl;
// Print_Counting(5);
// cout<<pow(10)<<endl;
// cout<<fibonacci(6)<<endl;
cout<<sum(10)<<endl;
 
return 0;
}