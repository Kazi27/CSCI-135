/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Substring pyramid

comments
comments
comments
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string text = "";
    string decrease = "";
    string increase = "";
    cout << "Enter text: " << endl;
    getline(cin, text);
    
    for (int i = 0; i < text.size(); i++)
    {
        increase += text[i];
        cout << increase << endl;
    }  

    for (int j = text.size(); j >= 0; j--)
    {
        decrease += text[j];
        cout << decrease << endl;
    }  
}