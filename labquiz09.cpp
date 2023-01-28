/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 9

comments
comments
comments
*/

#include <iostream>
using namespace std;

class Date
{
    public:
        int year;
        int month;
        int day;
        string day_of_week;
};

void printDate(Date *input)
{
    cout << input -> day_of_week << ", " << input -> month << "/" << input -> day << "/" << input -> year << endl;
}