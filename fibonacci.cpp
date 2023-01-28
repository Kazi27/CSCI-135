/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int i;
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << endl;
    cout << fib[1] << endl;
    for (i = 2; i < 60; i++)
    {
        fib[i] = (fib[i-1] + fib[i-2]);
        cout << fib[i] << endl;
    }
}

//numbers turn negative towards the end?