/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12C

comments
comments
comments
*/

#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta)
{
    //vector<int> v1;
    //vector<int> v2;

    for (int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    }

    vegeta.clear();
}

int main()
{
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    gogeta(v1, v2);
}