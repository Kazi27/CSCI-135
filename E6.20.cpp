/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.20

comments
comments
comments
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b)

{
    vector<int> Victor;
    int i = 0, j = 0;

    while(i < a.size() and j < b.size())
    {
        if(a[i] < b[j])
        {
            Victor.push_back(a[i]);
            i++;
        }

        else
        {
            Victor.push_back(b[j]);
            j++;
        }

    }

    for(j; j < b.size() ; j++ )
    {
        Victor.push_back(b[j]);
    }

    for(i; i < a.size() ; i++ )
    {
        Victor.push_back(a[i]);
    }

    return Victor;
}

int main()
{

}