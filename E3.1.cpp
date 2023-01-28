
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW 3.1

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int integer;
    cout << "Enter an integer: " << endl;
    cin >> integer;

    if (integer > 0)
    {
        cout << "positive" << endl;
    }
    if (integer == 0)
    {
        cout << "zero" << endl;
    }
    if (integer < 0)
    {
        cout << "negative" << endl;
    }
}