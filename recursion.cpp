/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB13D

comments
comments
comments
comments
comments
*/

#include <iostream>
using namespace std;

void printRange(int left, int right)
{
    if (left <= right)
    {
        cout << left << " ";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right)
{
    if (right < left)
    {
        return 0;
    }

    else if (left < right)
    {
        left = left + sumRange(left + 1, right);
    }

    return left;
}

int sumArray(int *arr, int size)
{
	if (size == 1)
    {
	    return *arr;
    } 
    
    else if (size <= 0)
    {
	    return 0;
    }
	
    return (*arr + sumArray(arr + 1, size - 1));
}

bool isAlphanumeric(string s)
{
    if (s == "")
    {
        return true;
    } 
    
    else if (!(isalnum(s[0])))
    {
		return false;
    }

	return isAlphanumeric(s.substr(1));
}

int main() 
{

}