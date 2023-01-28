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
  cout << "Enter first number: " << endl;
  int first;
  cin >> first;
  cout << "Enter second number: " << endl;
  int second;
  cin >> second;
  cout << "Enter third number: " << endl;
  int third;
  cin >> third;

  if ((first < second) and (first < third))
  {
    cout << "The smaller of the two is " << first << endl;
  }
  if ((second < first) and (second < third))
  {
    cout << "The smaller of the two is " << second << endl;
  }
  if ((third < first) and (third < second))
  {
    cout << "The smaller of the two is " << third << endl;
  }
}