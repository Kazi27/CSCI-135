/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E8.1

comments 
comments
comments
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream inFile;
    inFile.open("hello.txt");
    inFile << "Hello, World!";
    inFile.close();

    ifstream out;
    out.open("hello.txt");
    string text;
    getline(out, text);
    cout << text;
    out.close();
    return 0;
}