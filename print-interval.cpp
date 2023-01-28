/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int L;
    int U;
    int i;

    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;

    for (i = L; i < U; i++)
    {
        cout << i << " ";
    }
}
