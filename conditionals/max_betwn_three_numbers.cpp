#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter first number";
    cin >> a;
    cout << "enter second number";
    cin >> b;
    cout << "enter third number";
    cin >> c;

    if (a > b && a > c)
        cout << a << " greater number.";
    else if (b > a && b > c)
        cout << b << " gretaer number.";
    else
        cout << c << " greater number.";

    return 0;
}