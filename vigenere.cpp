/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6C

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

char shiftChar(char c, int rshift)
{
    if (islower(c))
    {
        return (c-'a'+rshift)%26 + 'a';
    }

    if (isupper(c))
    {
        return (c-'A'+rshift)%26 + 'A';
    }

    return c;
}

string encryptVigenere(string plaintext, string keyword)
{
    string ans;
    int j = 0;
    for (int i = 0; i < plaintext.size(); i++)
    {
        if (isalpha(plaintext[i]))
        {
            ans += shiftChar(plaintext[i], keyword[j]-'a');
            j++;
        }
            
        else
        {
            ans += plaintext[i];
        }
            
        if (j == keyword.size())
        {
            j = 0;
        }

    }
    return ans;
}

int main()
{
    string text;
    string key;

    cout << "Enter plaintext: " << endl;
    getline(cin, text);

    cout << "Enter keyword: " << endl;
    getline(cin, key);

    cout << "Ciphertext: " << encryptVigenere(text, key) << endl;
    return 0;
}