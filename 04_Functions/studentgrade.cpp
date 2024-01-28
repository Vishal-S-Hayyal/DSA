#include <iostream>
using namespace std;
char getgrade(int n){
    if(n>=90){
        return 'A';
    }
    else if(n>=80){
        return 'B';
    }
    else if(n>=70){
        return 'C';
    }
    else if(n>=60){
        return 'D';
    }
    else{
        return 'E';
    }
}
int main() {
int marks;
cout<<"Enter the marks"<<endl;
cin>>marks;
char result=getgrade(marks);
cout<<result<<endl;  
}