/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4D

comments 
comments
comments
*/

#include <iostream> 
using namespace std;
int main()
{
    int length,i,j;
    cout << "Input side length: ";
    cin >> length;
    cout << "Shape:" << endl;
    for (i = 0; i < length; i++) 
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
}