/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A
Finds smallest of two integers
Uses an if else statement too
Actually it uses multiple if statements
*/

#include <iostream>
using namespace std;
int main()
{
  cout << "Enter year: " << endl;
  int year;
  cin >> year;
  if (year % 4 != 0)
  {
    cout << "Common year" << endl;
  }
  else if (year % 100 != 0)
  {
    cout << "Leap year" << endl;
  }
  else if (year % 400 != 0)
  {
    cout << "Common year" << endl;
  }
  else
  {
    cout << "Leap year" << endl;
  }
}