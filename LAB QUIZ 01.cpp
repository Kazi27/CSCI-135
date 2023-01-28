
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lecture quiz 01

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int num;
int main ()
{
    cout << "Enter a number:" << endl;
    cin >> num;
    for (int i = 0; i < num; i++) 
    {
        cout << "I love C++" << "\n";
    }
}