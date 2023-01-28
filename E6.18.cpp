/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.18

comments
comments
comments
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b)
{
    vector<int>Victor;
    for (int i = 0; i < (a.size()); i++)
    {
        Victor.push_back(a[i]);
    }

    for (int j = 0; j < (b.size()); j++)
    {
        Victor.push_back(b[j]);
    }

    return Victor;
}

int main()
{

}