/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1B

Has while loop
Has if statements
Reads in a txt file
*/

#include <iostream>
using namespace std;

int main ()
{
  int sum = 0;
  int num = 0;
  char sign;
  
  cin >> num;               //reads in the number
  sum = sum + num;          //adds num to the sum ?
  while (cin >> sign)       //as long as you read in a sign
  { cin >> num;             //also read in all the numbers ??
    if (sign == '+')        //if sign is + (keep in mind ' is used instead of " because it is a symbol)
    {
      sum = sum + num;      //add the number to the sum
    }
    else if (sign == '-')   //if sign is - (keep in mind ' is used instead of " because it is a symbol)
    {
      sum = sum - num;      //subtract number from the sum
    }
  }
  cout << sum << endl;      //output the sum
  return 0;                 //ends the function
}