/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.1

comments
comments
comments
*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q)
{
    if (q < p)
    {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main()
{
    double x = 3.2;
    double y = 5.7;
    double* pointer1 = &x;
    double* pointer2 = &y;

    sort2(pointer1, pointer2);
    cout << *pointer1 << endl;

    //& is the address-of operator, and can be read simply as "address of"
    //* is the dereference operator, and can be read as "value pointed to by" but when initializing pointer * means nothing

}