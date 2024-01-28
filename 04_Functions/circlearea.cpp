#include <iostream>
using namespace std;

float Circle_area(float x){
    float area=3.14*(x*x);
    return area;
}
int main() {
float n;
cout<<"Enter the radius of circle"<<endl;
cin>>n;
float res=Circle_area(n);
cout<<"Area of the circle is:"<<res<<"m^2"<<endl;
}