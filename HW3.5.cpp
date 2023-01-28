
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW 3.5

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3;
    cout << "Enter first integer: " << endl;
    cin >> num1;
    cout << "Enter second integer: " << endl;
    cin >> num2;
    cout << "Enter third integer: " << endl;
    cin >> num3;

   if ((num3 > num2) and (num2 > num1))
   {
       cout << "increasing" << endl;
   }

   else if ((num3 < num2) and (num2 < num1))
   {
       cout << "decreasing" << endl;
   }
    else
    {
        cout << "neither" << endl;
    }
}