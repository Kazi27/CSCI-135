/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4A

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int width, height;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;

    cout << "Shape:" << endl;

    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j ++)
        {
            cout << "*";
        }
        cout << endl;
    }
}