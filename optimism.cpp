/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12B

comments
comments
comments
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v)
{
    vector<int> Victor;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            Victor.push_back(v[i]);
        }
    }
    return Victor;
}

int main()
{

}