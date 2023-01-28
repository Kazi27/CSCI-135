/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 05

comments
comments
comments
*/

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  ifstream fin;
  string line;
  fin.open ("data.txt");
  while(getline(fin, line)) 
  {
    cout << line << endl;
  }
  fin.close();
  return 0;
}