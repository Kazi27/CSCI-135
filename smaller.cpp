/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A
Finds smallest of two integers
Uses an if else statement too
*/

#include <iostream>
using namespace std;
int main()
{
  cout << "Enter first number: " << endl;
  int first;
  cin >> first;
  cout << "Enter second number: " << endl;
  int second;
  cin >> second;

  if (first > second)
  {
    cout << "The smaller of the two is " << second << endl;
  }
  if (second > first)
  {
    cout << "The smaller of the two is " << first << endl;
  }
}