/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E5.15

comments 
comments
comments
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    int tempA;
    tempA = a;

    if (a > b)
    {
        a = b;
        b = tempA;
    }
}

void sort3(int& a, int& b, int& c)
{ 
    sort2(b,c); //b = 3 and c = 4 so b = 4 now and c = 3
    sort2(a,b); //a = 2 and b = 4 so a = 4 now and b = 2
    //sort2(b,c); //b = 2 and c = 3 so b = 3 now and c = 2
}

int main()
{
    int u = 2; int v = 3; int w = 4;
    sort3(u,v,w);
    cout << u << v << w;
}