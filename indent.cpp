/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7B

comments
comments
comments
comments
comments
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countChar(string line, char c)
{
    int counter = 0;
    for (int j = 0; j < line.length(); j++)
    {
        if (line[j] == c)
        {
            counter += 1;
        }
    }
    return counter;
}

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
    int counter = 0;
    string line, updated;
    while (getline(cin, line, '\n'))
    {
        string new_Line = removeLeadingSpaces(line),
        indent = "";
        for(int i = 0; i < (new_Line[0] != '}' ? counter : counter - 1 ); i++)
        {
            indent += '\t';
        }
        cout << indent << new_Line << endl;
        counter += countChar(line, '{') - countChar(line, '}');
    }
}