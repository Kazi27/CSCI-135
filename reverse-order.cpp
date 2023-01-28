/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3D

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
    string earlier_date;
    string later_date;
    string date;
    string elevation;
    string eastSt;
    string eastEl;
    string westSt;
    string westEl;


    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    cout << "Enter starting date: ";
    cin >> earlier_date;
    cout << "Enter ending date: ";
    cin >> later_date;

    string junk;        // new string variable
    int i = 0;
    string myData[365][2];
    getline(fin, junk); // read one line from the file 

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) // this loop reads the file line-by-line, extracting 5 values on each iteration 
    { 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns 

        if ((date >= earlier_date) && (date <= later_date))
        {
            myData[i][0] = date;
            myData[i][1] = westEl;
            i+=1;
        }
    }

    for (int j = i; j >= 0; j--)
    {
        cout << myData[j][0] << " " << myData[j][1] << " " << "ft" << endl;
    }
    fin.close();
}