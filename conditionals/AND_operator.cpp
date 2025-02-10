#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    if(n>999 && n<10000)
    cout<<"the number is four digit";
    else
    cout<<"the number is not a four digit number";

    return 0;
}