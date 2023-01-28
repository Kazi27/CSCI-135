/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 07

comments
comments
comments
*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c)
{
    if ((a > b) && (a > c))
    {
        return a;
    }

   if ((b > a) && (b > c))
    {
        return b;
    }

    if ((c > b) && (c > a))
    {
        return c;
    }
}

int main()
{
    int x = 2;
    int y = 3;
    int z = 4;
    cout << max3(x,y,z) << endl;
}