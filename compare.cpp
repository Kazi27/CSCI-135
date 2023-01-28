/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3C

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main ()
{
    string start_date;
    string end_date;
    string date;
    string elevation;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;


    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    cout << "Enter starting date: ";
    cin >> start_date;
    cout << "Enter ending date: ";
    cin >> end_date;

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line, extracting 5 values on each iteration 
    { 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns 

        if ((date >= start_date) && (date <= end_date))
        {
            if (eastEl < westEl)
            {
                cout << date << " West" << endl;
                //elevation = "West";
            }
            else if (eastEl > westEl)
            {
                cout << date << " East" << endl;
                //elevation = "East";
            }
            else if (eastEl == westEl)
            {
                cout << date << " Equal" << endl;
                //elevation = "Equal";
            }
        }
    }
    //cout << start_date << " " << elevation << endl;
    fin.close();
}