/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E5.14

comments 
comments
comments
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    int old = a;
    if (a > b)
    {
        a = b;
        b = old;
    }
}

int main()
{
    int x, y;
    sort2(x,y);
    //cout << x << endl;
}