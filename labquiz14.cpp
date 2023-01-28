/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 14

comments
comments
comments
*/

#include <iostream>
#include<vector>
using namespace std;

vector <int> makeVector(int n)
{
    vector <int> Victor;
    if (n > 0)
    {
        for (unsigned int i = 0; i <= (n-1); i++)
        {
            Victor.push_back(i);
        }
    }

    else
    {
        return Victor;
    }
}