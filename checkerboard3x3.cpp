/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4G

comments 
comments
comments
*/

#include <iostream>
using namespace std;

int main()
{
    int width,height;
    cout << "Please input width: " << endl;
    cin >> width;
    cout << "Please input height: " << endl;
    cin >> height;

    for (int row=0; row < height; row++)
    {
        for (int col=0; col < width; col++)
        {
            if (((row)/(3)+(col)/(3))%(2) == (0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}