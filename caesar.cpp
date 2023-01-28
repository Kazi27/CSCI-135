/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6B

comments
comments
comments
comments
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

char shiftChar(char c, int rshift)
{
    if (isupper(c))
    {
        return (c-'A'+rshift)%26 + 'A';
    }
    
    if (islower(c))
    {
        return (c-'a'+rshift)%26 + 'a';
    }

    return c;
}

string encryptCaesar(string plaintext, int rshift)
{
    string answer;
    for (int i = 0; i < plaintext.size(); i++)
    {
        answer += shiftChar(plaintext[i], rshift);
    }
    return answer;
}

int main()
{
    string text;
    int num, length;
    cout << "Enter plaintext: ";
    getline(cin, text);
    cout << "Enter shift: ";
    cin >> num;
    cout << encryptCaesar(text, num) << endl;
}