#include<iostream>
using namespace std;
 int main(){
    int area,peri,l,b;
    cout<<"enter the value of length "<<endl;
    cin>>l;
    cout<<"enter the value of breadth "<<endl;
    cin>>b;

    area = l*b;
    peri=(l+b)*2;

    cout<<"the area of rectangle is"<<area<<"the perimeter of rectangle is"<<peri<<endl;

 }