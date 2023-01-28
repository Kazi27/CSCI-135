
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW 4.8

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;
#include<cstring>

int main ()
{
    string word;
    int i, length;

    cout << "Enter a word: " << endl;
    cin >> word;

    length = word.length();
    //cout << word[0] << endl;

    for(i = 0; i < length; i++)
    {
        cout << word[i] << endl;
    }
}