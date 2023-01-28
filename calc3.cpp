
/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D

Has while loop
Has if statements
Reads in a txt file
comment
comment
*/

#include <iostream>
using namespace std;

int main ()
{
  int sum = 0;
  int num = 0;
  char sign;
  char var;

  while (cin >> num)
  {
    sum += num;
    while (cin >> sign)
    {
      if (sign == '^')
      {
        sum = sum * sum;
      }

      if (sign == '+')
      {
        cin >> num;
        var = cin.peek();
        if (var == '^')
        {
          cin >> sign;
          sum = sum + (num * num);
        }
        else
        {
          sum += num;
        }
      }

      if (sign == '-')
      {
        cin >> num;
        var = cin.peek();
        if (var == '^')
        {
          cin >> sign;
          sum = sum - (num * num);
        }
        else
        {
          sum -= num;
        }
      }

      if (sign == ';')
      {
        cout << sum << endl;
        sum = 0;
        break;
      }
    }
  }
}