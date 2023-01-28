/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4B

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int width, height;
    int poop = 0;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;

    cout << "Shape:" << endl;

    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++)
        {
            if (i % 2 == 0)
            {
                if (poop%2 == 0)
            {
                cout << "*";
            }
                else if (poop%2 != 0)
            {
                cout << " ";
            }
                poop++;
            }
            else
            {
                if (poop%2 == 0)
                {
                    cout << " ";
                }
                else if (poop%2 != 0)
                {
                    cout << "*";
                }
                poop++;
            }
        }
        cout << endl;
        poop = 0;
        /*for (int j = 0; j < width; j ++)
        {
            cout << "* ";
        }
        cout << endl;*/
    }
}