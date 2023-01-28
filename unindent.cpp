/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7A

comments
comments
comments
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line)
{
    int counter = 0;
    while(isspace(line[counter]))
    {
        counter += 1;
    }

    string newLine;
    for (int i = counter; i < line.size(); i++)
    {
        newLine += line[i];
    }
    return newLine;
}

int main()
{
    //cout << "poop" << endl;
    string line;
    while(getline(cin, line))
    {
        cout << removeLeadingSpaces(line) << endl;
    }
}
