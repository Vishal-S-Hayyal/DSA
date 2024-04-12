#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int k, int i){
    //Base case
    if(i >= n) return false;
    if(arr[i] == k) return true;

    // Recursive call
    bool ans = search(arr,n,k,i+1);

    return ans;
}

void print(int arr[], int n, int i){
    if(i >= n){
        return;
    }
    cout<<arr[i]<<" ";
    print(arr, n, i+1);
}

void minimum(int arr[], int n, int i, int &mini){
    //Base Condition
    if(i >= n){
        return;
    }

    mini = min(mini, arr[i]);
    //Recursive Call
    minimum(arr, n,i+1,mini);
}

void solve(int arr[], int n, int i, vector<int> &v){
    //Base Condition
    if(i >= n){
        return;
    }
    if((arr[i] % 2) == 0){
        v.push_back(arr[i]);
    }
    solve(arr,n,i+1,v);
}

void solve1(int arr[], int n, int i){
    //Base Case
    if(i>=n) return;
    arr[i] = 2*arr[i];
    //Recursive call
    solve1(arr,n,i+1);
}

int solve2(int n){
    //Base Case
    if(n == 0) return 0;

    //Processing
    int digit = n % 10;
    n = n/10;

    //Recursive Call
    solve2(n);

    //Processing
    cout<<digit<<" ";
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int arr [5] = {10,20,31,40,50};
int size = 5;
// vector<int> v;
// print(arr,5,0);
// bool ans = search(arr,5,50,0);
// cout<<ans<<" ";

// int mini = INT_MAX;
// minimum(arr,size,0,mini);
// cout<<"Minimum is : "<<mini<<endl;

// solve(arr,size,0,v);

// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }

// solve1(arr,size,0);

// for (int i = 0; i < size; i++)
// {
//     cout<<arr[i] << endl;
// }

int k = 4215;
solve2(k); 
return 0;
}