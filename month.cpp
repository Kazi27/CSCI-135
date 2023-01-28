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
    int year;
    int month;
    cout << "Enter year: " << endl;
    cin >> year;

    cout << "Enter month: " << endl;
    cin >> month;

    // normal feb days 
    // for years like 1700, 1800
    if ((year % 100 == 0 && year % 400 != 0)  && month == 2) {
        cout << "28 days" << endl;
    }
    // for years like 2018, 2021 
    else if ((year % 4 != 0)  && month == 2) {
        cout << "28 days" << endl;
    }

    // check for leap year 
    else if ((((year % 400 == 0)) || (year % 4 == 0)) && (month == 2)) {
        cout << "29 days" << endl;
    }

    else if ((month < 8 && month != 2) && month % 2 == 0) {
        cout << "30 days" << endl;
    }

    else if (month < 8 && month % 2 != 0) {
        cout << "31 days" << endl;
    }

    else if (month >= 8 && month % 2 ==0) {
        cout << "31 days" << endl;
    }

    else if (month >= 8 && month % 2 != 0) {
        cout << "30 days" << endl;
    }
    return 0;
}