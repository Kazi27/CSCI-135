/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.6

comments 
comments
comments
*/


#include <iostream>
using namespace std;

string middle(string str)
{
    int len = str.size();
    string middle;

    if (len % 2 == 0)
    {
        middle = str.substr((len/2)-1, 2);
    }

    if (len % 2 != 0)
    {
        middle = str[len/2];
    }

    return middle;
}

int main()
{
    string str;
    cout << "Enter a word: " << endl;
    cin >> str;
    cout << middle(str) << endl;
    return 0;
}