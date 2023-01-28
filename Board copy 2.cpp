/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Game 1024 Task C

comments
comments
comments
*/

#include <vector>
#include <random>
#include <algorithm>
#include "Board.hpp"
#include <iomanip>
#include <iostream>

void Board::print() const
{
    for(unsigned int i = 0; i < numRows; i++)
    {
        std::cout << '+';
        for(unsigned int j = 0; j < numCols; j++)
        {
            std::cout << "----+";   
        }     
        std::cout << '\n';
        std::cout << '|';
        for(unsigned int j = 0; j < numCols; j++)
        {
            if(panel[i][j] == 0)
            {
                std::cout << std::right <<std::setw(4) << ' ' << '|';
            }

            else 
            {
                std::cout << std::right <<std::setw(4) << panel[i][j] << '|';
            }
        }
        std::cout << '\n';
    }
    std::cout << '+';
    for(unsigned int j = 0; j < numCols; j++)
    {
        std::cout << "----+";
    }
    std::cout << '\n';
}

void mergeList(std::vector<unsigned int> &myList)
{
    std::vector<unsigned int> newList;
    for(unsigned int i = 0; i < myList.size(); i++)
    {
        if(i == myList.size()-1)
        {
            newList.push_back(myList[i]);
            continue;            
        }
        if(myList[i] == myList[i+1])
        {
            newList.push_back(myList[i] * 2);
            i++;
            continue;
        }
        newList.push_back(myList[i]);
    }
    myList = newList;
}

void Board::pressUp()
{
    for(unsigned int i = 0; i < numCols; i++)
    {
        std::vector<unsigned int> myList;
        for(unsigned int j = 0; j < numRows; j++)
        {
            if(panel[j][i] != 0)
            {
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        }   

        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
        {
            panel[j][i] = myList[j];
        }
    }
    
    int x, y;
    selectRandomCell(x, y);
}

void Board::pressDown()
{
    for(unsigned int i = 0; i < numCols; i++)
    {
        std::vector<unsigned int> myList;
        for(unsigned int j = 0; j < numRows; j++)
        {
            if(panel[j][i] != 0)
            {
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        }
        std::reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(int j = myList.size() - 1; j >= 0; j--)
        {
            panel[numRows - j - 1][i] = myList[j];
        }
    }

    int a, b;
    selectRandomCell(a, b);
}

void Board::pressLeft()
{
    for(unsigned int i = 0; i < numRows; i++)
    {
        std::vector<unsigned int> myList;
        for(unsigned int j = 0; j < numCols; j++)
        {
            if(panel[i][j] != 0)
            {
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        }

        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
        {
            panel[i][j] = myList[j];
        }
    }

    int c, d;
    selectRandomCell(c, d);
}

void Board::pressRight(){
    for(unsigned int i = 0; i < numRows; i++){
        std::vector<unsigned int> myList;
        for(unsigned int j = 0; j < numCols; j++)
            if(panel[i][j] != 0){
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        std::reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
            panel[i][numCols - j - 1] = myList[j];
    }
    int WTF_IS_THIS_FOR, IDK;
    selectRandomCell(WTF_IS_THIS_FOR, IDK);
}