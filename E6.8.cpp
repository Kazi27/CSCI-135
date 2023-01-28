/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.8

comments
comments
comments
*/

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    for (int i = 0; i < max(a_size,b_size); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int c[5] = {16, 2, 77, 40, 12071}; 
    int d[5] = {16, 2, 87, 40, 12071};
    equals(c,5,d,5);
    if (equals(c,5,d,5))
    {
        cout << "Equal" << endl;
    }
    else 
    {
        cout << "Not Equal" << endl;
    }
}