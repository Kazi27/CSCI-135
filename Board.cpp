/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Game 1024

comments
comments
comments
*/

#include "Board.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
using namespace std;

Board::Board()
{
    numRows = 3;
    numCols = 3;

    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }
    max = 0;
    target = 32;
}

Board::~Board()
{
    delete[] panel;
    panel = nullptr;

}

Board::Board(int m)
{
    if (m >= 1)
    {
        numRows = m;
        numCols = m;
    }
    else
    {
        numRows = 3;
        numCols = 3;
    }
    
    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }

    max = 0;
    target = 32;
}

Board::Board(int m, int n)
{
    if ((m >= 1) && (n >= 1))
    {
        numRows = m;
        numCols = n;
    }
    else
    {
        numRows = 3;
        numCols = 3;
    }
    
    for (int i=0; i<numRows; i++)
    {
        for (int j=0; j<numCols; j++)
        {
            panel[i][j];
        }
    }
    
    max = 0;
    target = 32;
}

void Board::print() const
{
    for (int j=0; j<numRows; j++)
    {
        for (int j=0; j<numCols; j++)
        {
            cout << "+----";
        }
        cout << "+" << endl;
        for (int k=0; k<numCols; k++)
        {
            cout << "|    ";
        }
        cout << "|" << endl;
    }

    for (int j=0; j<numCols; j++)
    {
        cout << "+----";
    }
    cout << "+" << endl;
}