/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12D

comments
comments
comments
comments
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2)
{
    vector<int> Victor;
    int large = max(v1.size(), v2.size());
    int tiny = min(v1.size(), v2.size());
    
    for (int i = 0; i < large - tiny; i++)
    {
        if (v1.size() > v2.size())
        {
            v2.push_back(0);
        } 
        if (v1.size() < v2.size())
        {
            v1.push_back(0);
        }
    }
    
    for (int i = 0; i < large; i++)
    {
        Victor.push_back(v1[i] + v2[i]);
    }
    
    return Victor;
}

int main()
{
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    vector<int> Victor = sumPairWise(v1, v2);

    for (int i = 0; i < Victor.size(); i++)
    {
        cout << Victor[i] << " ";
    }
}