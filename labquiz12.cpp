/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 12

comments
comments
comments
*/


#include <iostream>
using namespace std;

class Money
{
    public:
        int dollars;
        int cents;
};

Money add_money(Money x, Money y)
{
    int cents = x.cents + y.cents;
    Money result = {x.dollars + y.dollars + (cents / 100), cents % 100};
    return result;
}