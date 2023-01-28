/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
    int myData[10];
    int j;
    int i;
    int v;
    


    for (j = 0; j < 10; j++)
    {
        myData[j] = 1;
    }

    do
    {
        for (j = 0; j < 10; j++)
        {
            cout << myData[j] << " ";
        }
        cout << endl;
        cout << "Input index: ";
        cin >> i;
        cout << "Input value: ";
        cin >> v;

        if ((0 <= i) and (i < 10))
        {
            myData[i] = v;
        }
    }
    while ((0 <= i) and (i < 10));
}