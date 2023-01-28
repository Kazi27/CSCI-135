//Oluebube Onwuamaegbu
//oluebube.onwuamaegbu06@myhunter.cuny.edu
//Professor Tong Yi
//May 2022

#include "Board.hpp"
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

Board::Board()
{
    max = 0;
    setGoal(32);
    numRows = 3;
    numCols = 3;
    allocateMemory();
}

Board::Board(int m)
{
    max = 0;
    setGoal(32);
    if(m >= 1)
    {
        numRows = m;
        numCols = m;
    } 
    
    else
    {
        numRows = 3;
        numCols = 3;
    }
    allocateMemory();
}

Board::Board(int m, int n)
{
    max = 0;
    setGoal(32);
    if(m >= 1 && n >= 1)
    {
        numRows = m;
        numCols = n;
    } 
    
    else
    {
        numRows = 3;
        numCols = 3;
    }
    
    allocateMemory();
}

Board::~Board()
{
    for(int i = 0; i < numRows; i++)
    {
        delete[] panel[i];
    }
    delete[] panel;
    panel = NULL;
}

void Board::allocateMemory()
{
    panel = new int* [numRows];
    for(unsigned int i = 0; i < numCols; i++)
    {
        panel[i] = new int[numCols];
    }
}

void Board::setGoal(int goal)
{
    target = goal;
}

void Board::clear()
{
    for(unsigned int i = 0; i < numRows; i++)
    {
        for(unsigned int j = 0; j < numCols; j++)
        {
            panel[i][j] = 0;
        }
    }
}

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
                std::cout << std::right << std::setw(4) << ' ' << '|';
            }

            else
            {
                std::cout << std::right << std::setw(4) << panel[i][j] << '|';
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

bool Board::noAdjacentSameValue() const
{
    for(unsigned int i = 0; i < numRows - 1; i++)
    {
        for(unsigned int j = 0; j < numCols; j++)
        {
            if(panel[i][j] == panel[i + 1][j])
            {
                return false;
            }
        }
    }

    for(unsigned int i = 0; i < numRows; i++)
    {
        for(unsigned int j = 0; j < numCols - 1; j++)
        {
            if(panel[i][j] == panel[i][j + 1])
            {
                return false;
            }
        }
    }
    return true;
}

void Board::selectRandomCell(int& row, int& col)
{
    std::vector<unsigned int> emptyCells;
    for(unsigned int i = 0; i < numRows; i++)
    {
        for(unsigned int j = 0; j < numCols; j++)
        {
            if(!panel[i][j])
            {
                emptyCells.push_back(i * numCols + j);
            }
        }
    }

    if(!emptyCells.size() && noAdjacentSameValue())
    {
        std::cout << "Game over. Try again." << '\n';
        exit(0);
    } 
    
    else if(!emptyCells.size() && !noAdjacentSameValue())
    {
        return;
    } 
    
    else
    {
        unsigned int emptyCell = emptyCells[std::rand() % emptyCells.size()];
        row = emptyCell / numCols;
        col = emptyCell % numCols;
        panel[row][col] = 1;
        print();
        if(!(emptyCells.size() - 1) && noAdjacentSameValue())
        {
            std::cout << "Game over. Try again." << '\n';
            exit(0);
        }
    }
}

void mergeList(std::vector<unsigned int>& myList)
{
    std::vector<unsigned int> newList;
    for(unsigned int i = 0; i < myList.size(); i++)
    {
        if(i == myList.size() - 1)
        {
            newList.push_back(myList[i]);
            continue;
        }
        if(myList[i] == myList[i + 1])
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
    int WTF_IS_THIS_FOR, IDK;
    selectRandomCell(WTF_IS_THIS_FOR, IDK);
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
    int WTF_IS_THIS_FOR, IDK;
    selectRandomCell(WTF_IS_THIS_FOR, IDK);
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
    int WTF_IS_THIS_FOR, IDK;
    selectRandomCell(WTF_IS_THIS_FOR, IDK);
}

void Board::pressRight()
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

        std::reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(unsigned int j = 0; j < myList.size(); j++)
        {
            panel[i][numCols - j - 1] = myList[j];
        }
    }
    int WTF_IS_THIS_FOR, IDK;
    selectRandomCell(WTF_IS_THIS_FOR, IDK);
}

void Board::start()
{
    unsigned int round = 1;
    int STILL_USELESS, IDK;
    selectRandomCell(STILL_USELESS, IDK);
    selectRandomCell(STILL_USELESS, IDK);

    while(true)
    {

        for(unsigned int i = 0; i < numRows; i++)
        {
            for(unsigned int j = 0; j < numCols; j++)
            {
                if(panel[i][j] >= max)
                {
                    max = panel[i][j];
                }
            }
        }

        if(max >= target)
        {
            std::cout << "Congratulation!" << '\n';
            break;
        }

        char ch = getchar();
        if(ch == 'S')
        {
            break;
        }

        if(ch == '\033')
        {
            getchar();
            switch(getchar())
            {
            case 'A':
                std::cout << "Round " << std::setw(4) << round << ": ";
                std::cout << "Press UP. " <<
                    "Goal: " << target << std::endl;
                pressUp();
                round++;
                break;

            case 'B':
                std::cout << "Round " << std::setw(4) << round << ": ";
                std::cout << "Press DOWN. " <<
                    "Goal: " << target << std::endl;
                pressDown();
                round++;
                break;

            case 'C':
                std::cout << "Round " << std::setw(4) << round << ": ";
                std::cout << "Press RIGHT. " <<
                    "Goal: " << target << std::endl;
                pressRight();
                round++;
                break;

            case 'D':
                std::cout << "Round " << std::setw(4) << round << ": ";
                std::cout << "Press LEFT. " <<
                    "Goal: " << target << std::endl;
                pressLeft();
                round++;
                break;

            default:
                break;
            }
        }
    }
}