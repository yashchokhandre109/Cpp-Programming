#include<iostream>
using namespace std;

int main(){
    int input,year,day,rem,week;

    cout<<"Enter the number";
    cin>>input;

    year=input/365;
    rem=input%365;
    week=rem/7;
    day=rem%7;

    cout<<"year"<<year<<"week"<<week<<"day"<<day;
    return 0;
}