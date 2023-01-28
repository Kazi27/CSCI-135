/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int integer;
    int squared;
    
    cout << "Please enter an integer: " << endl;
    cin >> integer;

    while ((integer <= 0) or (integer >= 100))
    {
        cout << "Please re-enter: " << endl;
        cin >> integer;
    }
    if ((integer > 0) and (integer < 100))
    {
        squared = integer * integer;
        cout << "Number squared is " << squared << endl;
    }
}
