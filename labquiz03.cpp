/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 03

comments
comments
comments
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;

    if (y > x)
    {
        cout << y << " is greater than " << x << endl;
    }

    if (x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
}