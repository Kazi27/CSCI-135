/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12A

comments
comments
comments
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
    vector<int> Victor;
    for (int i = 0; i <= n-1; i++)
    {
        Victor.push_back(i);
    }

    return Victor;
}

int main()
{
    //cout << makeVector(3) << endl;
}
