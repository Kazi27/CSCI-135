/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 08

comments
comments
comments
*/

#include <iostream>
using namespace std;

void remove_e(string& sentence)
{
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == 'e')
        {
            sentence.erase(i,1);
        }
    }
}

int main()
{
    string text;
    text = "ae";
    remove_e(text);
    //cout << remove_e(text) << endl;
}