/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3A

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
    string date;
    string input_date;
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

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 

    cout << "Enter date: ";
    cin >> input_date;
    //getline(fin, input_date);
    //cout << input_date;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line, extracting 5 values on each iteration 
    { 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns 
        //cout << date << " " << eastSt << endl; // for example, to print the date and East basin storage:
        //getline(fin, input_date);
        //cout << "East basin storage: " << eastSt << endl;
        if (input_date == date)
        {
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        }
    }
    
    

    fin.close();
}