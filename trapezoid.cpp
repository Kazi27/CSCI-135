/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4F

comments 
comments
comments
*/

#include <iostream>

using namespace std;

int main()
{
    int width, height;
    cout << "Please input width: " << endl;
    cin >> width;
    cout << "Please input height: " << endl;
    cin >> height;

    int spaces = 0, stars = width;

    if (width-height< width/2)
    {
        cout << "Impossible shape!" << endl;
    }
    else
    {
        for (int row=0; row < height; row++)
        {
            for (int col=0; col < spaces; col++)
            {
                cout <<" ";
            }
            for (int col=0; col < stars; col++)
            {
                cout << "*";
            }
            cout << endl;
            spaces += 1;
            stars -= 2;
        }
    }
    return 0;
}