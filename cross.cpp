/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4C

comments 
comments
comments
*/

#include <iostream>
using namespace std;

int main ()
{
    int size = 0, space = 0;
    cout << "Input size: ";
    cin >> size;

    cout << "Shape: " << endl;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if(j == 1 + space || j == size - space)
                cout << "*";
            else
                cout << " ";
        }
        space++;
        cout << endl;
    }
    return 0;
}