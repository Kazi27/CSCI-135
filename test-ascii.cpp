/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6A

comments
comments
comments
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cout << "Input text: " << endl;
    getline(cin, s);
    int len = s.length();
    
    for (int i = 0; i < len; i++)
    {
        cout << s[i] << " " << int(s[i]) << endl;
    }
}