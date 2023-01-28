/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

comments 
comments
comments
*/

#include <iostream> 
using namespace std;
int main()
{
    int length,i,j,k;
    cout << "Input side length: ";
    cin >> length;
    cout << "Shape:" << endl;
    for (i = length; i >= 1; i--) 
    {
        for (k = length - i; k > 0; k--)
        {
            cout << " ";
        }
        for (j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}