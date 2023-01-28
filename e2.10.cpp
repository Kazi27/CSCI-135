/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tony Yi
Assignment: Lab1D

Finds leap year
Gets month
Prints number of days in that month
*/

#include <string>
#include <iostream>
using namespace std;

int main()
{
  double gallons;
  double fuel_efficiency;
  double gas_price;
  
  cout << "Enter number of gallons: " << endl;
  cin >> gallons;
  cout << "Enter fuel efficiency: " << endl;
  cin >> fuel_efficiency;
  cout << "Enter gas price: " << endl;
  cin >> gas_price;

  cout << "The cost per 100 miles is " << gas_price * (100/fuel_efficiency) << " dollars" << endl;
  
  cout << "The car can go " << fuel_efficiency * gallons << " miles" << endl;
}