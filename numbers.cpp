
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5F

comments
comments
comments
comments
comments
comments
comments
COMMENTS
COMMENTS
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if ((d == 0) or (n % d != 0))
    {
        return false;
    }

    if ((n % d) == 0)
    {
        return true;
    }
}

bool isPrime(int n)
{   
    if (n <= 1)
    {
        return false;
    }
    
    for (int i = 2; i <= n - 1; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int n)
{
    for (int i = n + 1; i > n; i++)
    {
        if ((isPrime(i)) == true)
        {
            return i;
        }
    }
    return 0;
}

int countPrimes(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if ((isPrime(i)) == true)
        {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n)
{
    if ((isPrime(n)) and ((isPrime(n+2)) or (isPrime(n-2))))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    for (int i = n + 1; i > n; i++)
    {
        if ((isTwinPrime(i)) == true)
        {
            return i;
        }
    }
    return 0;
}

int largestTwinPrime(int a, int b)
{
    //int TwinPrimeLarge = -1;
    for (int i = b; i >= a; i--)
    {
        if (isTwinPrime(i))
        {
            return i;
            //TwinPrimeLarge = i;
        }
    }
    return -1;
    //return TwinPrimeLarge;
}


int main ()
{
    int x, y;
    cout << "Enter a starting number: " << endl;
    cin >> x;
    cout << "Enter an ending number: " << endl;
    cin >> y;
    largestTwinPrime(x,y);
    cout << largestTwinPrime(x,y) << endl; 
    return 0;
}